#pragma once
#include "DotNetHelper.h"

#include <unordered_map>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <any>
#include <typeinfo>
#include <mutex>

int main(int argc)
{
	ICorRuntimeHost* pCorRuntimeHost = NULL;

	//_MethodInfo* mInfo;
	HRESULT hr;

	// start
	_AppDomainPtr pAppDomainPtr = pGetAppDomainPtr(L"v4.0.30319", pCorRuntimeHost);
	if (pAppDomainPtr == NULL) 
	{
		pCleanup(pCorRuntimeHost);
		return 0;
	}
	
	// get mscorlib
	_AssemblyPtr pAssemblyPtr = pGetCoreLibAssembly(pAppDomainPtr);

	_TypePtr pConsole = pFind_Type(pAssemblyPtr, "System.Console");
	_TypePtr pString = pFind_Type(pAssemblyPtr, "System.String");

	bstr_t mName = L"WriteLine";
	_MethodInfo* mInfo;
	IUnknown* typ(pString);
	variant_t typs[] = { typ };
	hr = pConsole->GetMethod_5(mName,
		pToSafeArray(typs, GetArraySize(typs), VT_UNKNOWN), &mInfo);
	if (FAILED(hr))
	{
		wprintf(L"GetMethod_5 failed w/hr 0x%08lx\n", hr);

		pCleanup(pCorRuntimeHost);
		return 0;
	}

	variant_t targetObject(static_cast<IUnknown*>(pConsole));
	variant_t vtArg[] = { variant_t(L"Hello") };
	variant_t result;

	hr = mInfo->Invoke_3(targetObject,
		pToSafeArray(vtArg, GetArraySize(vtArg), VT_VARIANT), &result);
	if (FAILED(hr))
	{
		wprintf(L"Invoke_3 failed w/hr 0x%08lx\n", hr);

		pCleanup(pCorRuntimeHost);
		return 0;
	}

	wchar_t* argument = L"World";
	variant_t vtArg2[] = { argument };
	pInvoke_Public_Static_Method(pConsole, mName, vtArg2, GetArraySize(vtArg2));

	/*// pLoadFromDisk
	auto dsdfs = pLoadFromDisk(pAppDomainPtr, L"StrongVM.Test");
	_MethodInfo* dada;
	dsdfs->get_EntryPoint(&dada);

	variant_t targetObject0;
	targetObject0.vt = VT_NULL;

	SAFEARRAY *vtArg0 = { };
	variant_t result0;
	dada->Invoke_3(targetObject0, vtArg0, &result0); // pLoadFromDisk End*/

	// Release
	pCleanup(pCorRuntimeHost);

	return 0;
}