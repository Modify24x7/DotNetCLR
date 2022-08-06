#pragma once
#include <assert.h>
#include <algorithm>        // std::swap
#include <iostream>
#include <sstream>
#include <stdlib.h>         // EXIT_SUCCESS, EXIT_FAILURE

#include "RuntimeHost.h"
#include <winerror.h>

using std::swap;

typedef ptrdiff_t   Size;
typedef Size        Index;

bool throwX(std::string const& s) 
{ 
   printf(s.c_str());
   return false;
   // throw std::runtime_error(s);
}

bool startsWith(wchar_t const prefix[], wchar_t const s[])
{
    while (*prefix != 0 && *prefix == *s) { ++prefix; ++s; }
    return (*prefix == 0);
}

template< class Predicate >
struct Is : Predicate
{};

template< class Type, class Predicate >
bool operator>>(Type const& v, Is< Predicate > const& check)
{
    return check(v);
}

struct HrSuccess
{
    bool operator()(HRESULT hr) const
    {
        ::SetLastError(hr);
        return SUCCEEDED(hr);
    }
};

struct Text
{
private:
    std::ostringstream  stream;

    Text(Text const&);
    Text& operator=(Text const&);

public:
    Text() {}

    template< class Type >
    Text& operator<<(Type const& v)
    {
        stream << v;
        return *this;
    }

    operator std::string() const
    {
        return stream.str();
    }
};

template< class Type >
struct VariantType;

template<>
struct VariantType< IUnknown* >
{
    static VARENUM const    id = VT_UNKNOWN;
};

template<>
struct VariantType< VARIANT >
{
    static VARENUM const    id = VT_VARIANT;
};

class OleVector
{
private:
    typedef OleVector   ThisClass;
    SAFEARRAY* descriptor_;
    Index       lowerBound_;
    Index       upperBound_;

    ThisClass(ThisClass const&);
    ThisClass& operator=(ThisClass const&);

    Index lowerBound() const
    {
        if (descriptor_ == 0) { return 0; }
        long result;
        SafeArrayGetLBound(descriptor_, 1, &result)
            >> Is< HrSuccess >()
            || throwX("OleVector::lowerBound: SafeArrayGetLBound failed");
        return result;
    }

    Index upperBound() const
    {
        if (descriptor_ == 0) { return 0; }
        long result;
        SafeArrayGetUBound(descriptor_, 1, &result)
            >> Is< HrSuccess >()
            || throwX("OleVector::upperBound: SafeArrayGetUBound failed");
        return result;
    }

public:
    OleVector() : descriptor_(0) {}

    explicit OleVector(SAFEARRAY* descriptor)
        : descriptor_(descriptor)
        , lowerBound_(0)
        , upperBound_(0)
    {
        assert(descriptor_ == 0 || ::SafeArrayGetDim(descriptor_) == 1);
        lowerBound_ = lowerBound();
        upperBound_ = upperBound();
    }

    template< class ElemType >
    OleVector(Size size, VariantType< ElemType >)
        : descriptor_(::SafeArrayCreateVector(VariantType< ElemType >::id, 0, size))
        , lowerBound_(0)
        , upperBound_(size - 1)
    {
        assert(descriptor_ != 0 && ::SafeArrayGetDim(descriptor_) == 1);
        lowerBound_ = lowerBound();
        upperBound_ = upperBound();
    }

    ~OleVector()
    {
        if (descriptor_ != 0)
        {
            ::SafeArrayDestroy(descriptor_);
        }
    }

    SAFEARRAY* asSafeArray() const
    {
        return descriptor_;
    }

    VARENUM elemType() const
    {
        VARTYPE     result = 0;
        if (descriptor_ != 0)
        {
            ::SafeArrayGetVartype(descriptor_, &result)
                >> Is< HrSuccess >()
                || throwX("OleVector::elemType: SafeArrayGetVartype failed");
        }
        return VARENUM(result);
    }

    void swapWith(OleVector& other)
    {
        swap(descriptor_, other.descriptor_);
        swap(lowerBound_, other.lowerBound_);
        swap(upperBound_, other.upperBound_);
    }

    void clear()
    {
        OleVector().swapWith(*this);
    }

    Size count() const
    {
        return (upperBound_ + 1) - lowerBound_;
    }

    Size elemSize() const
    {
        return (descriptor_ == 0 ? 0 : ::SafeArrayGetElemsize(descriptor_));
    }

    void getElement(Index i, void* pResult) const
    {
        long internalIndex = i + lowerBound_;
        ::SafeArrayGetElement(descriptor_, &internalIndex, pResult)
            >> Is< HrSuccess >()
            || throwX("OleVector::getElement: SafeArrayGetElement failed");
    }

    void setElement(Index i, void* pData)
    {
        long internalIndex = i + lowerBound_;
        ::SafeArrayPutElement(descriptor_, &internalIndex, pData)
            >> Is< HrSuccess >()
            || throwX("OleVector::setElement: SafeArrayPutElement failed");
    }
};

template< class ElemType >
class ElemAccess
{
private:
    OleVector* v_;

    template< class T >
    static void* safeArrayPutArg(T& v) { return &v; }

    template<>
    static void* safeArrayPutArg(IUnknown*& v) { return v; }

public:
    ElemAccess(OleVector& v)
        : v_(&v)
    {
        assert(VariantType< ElemType >::id == v_->elemType());
        assert(v_->elemSize() == sizeof(ElemType));
    }

    ElemType elem(Index i) const
    {
        ElemType    result;
        v_->getElement(i, &result);
        return result;
    }

    void setElem(Index i, ElemType v)
    {
        v_->setElement(i, safeArrayPutArg(v));
    }
};
