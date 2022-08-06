#pragma once
#include "RuntimeHost.h"
#include <vector>
#include "Helper.h"

#define GetArraySize(x)  (sizeof(x) / sizeof((x)[0]))
#define GetArrayLength(x)  (GetArraySize(x) - 1)

void pCleanup(ICorRuntimeHost* pCorRuntimeHost);

// v2.0.50727 or v4.0.30319
_AppDomainPtr pGetAppDomainPtr(LPCWSTR dotNetVersion, ICorRuntimeHost* pCorRuntimeHost);

std::vector<_AssemblyPtr> pGetAssemblyList(_AppDomainPtr pAppDomain);

_AssemblyPtr pGetCoreLibAssembly(_AppDomainPtr pAppDomain);
_AssemblyPtr pFind_Assembly(_AppDomainPtr pAppDomain, const wchar_t* pName);
_AssemblyPtr pLoadFromDisk(_AppDomainPtr pAppDomain, wchar_t* assemblyName);
_AssemblyPtr pLoadFromMemory(_AppDomainPtr pAppDomain, unsigned char data[], const unsigned int data_length);

SAFEARRAY* pToSafeArray(variant_t* var_t, int var_tSize, VARTYPE vt);

_TypePtr pFind_Type(_AssemblyPtr assemblyPtr, char* ClassName);
_TypePtr pFind_Type_2(_AppDomainPtr pAppDomain, char* ClassName);

_FieldInfo* pFind_Field(_TypePtr spTyped, char* nameField, BindingFlags bindingAttr);

variant_t pInvoke_Public_Method(_TypePtr spType, wchar_t* method, variant_t* command, int argSize);
variant_t pInvoke_NonPublic_Method(_TypePtr spType, wchar_t* method, variant_t* command, int argSize);
variant_t pInvoke_Public_Static_Method(_TypePtr spType, wchar_t* method, variant_t* command, int argSize);
variant_t pInvoke_NonPublic_Static_Method(_TypePtr spType, wchar_t* methodName, variant_t* command, int argSize);

//cpp

/*extern const unsigned int data_length;
extern unsigned char data[];*/

void pCleanup(ICorRuntimeHost* pCorRuntimeHost)
{
	if (pCorRuntimeHost)
	{
		pCorRuntimeHost->Release();
		pCorRuntimeHost = NULL;
	}
}

_AppDomainPtr pGetAppDomainPtr(LPCWSTR dotNetVersion, ICorRuntimeHost* pCorRuntimeHost)
{
	HRESULT hr;

	IUnknownPtr spAppDomainThunk = NULL;
	_AppDomainPtr spDefaultAppDomain = NULL;
	// Create the runtime host
	if (!pCreateCorRuntimeHost(dotNetVersion, &pCorRuntimeHost))
	{
		wprintf(L"Failed to create the runtime host\n");
		goto Cleanup;
	}

	// Start the CLR
	hr = pCorRuntimeHost->Start();
	if (FAILED(hr))
	{
		wprintf(L"CLR failed to start w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	hr = pCorRuntimeHost->GetDefaultDomain(&spAppDomainThunk);
	if (FAILED(hr))
	{
		wprintf(L"RuntimeClrHost::GetCurrentAppDomainId failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	hr = spAppDomainThunk->QueryInterface(IID_PPV_ARGS(&spDefaultAppDomain));
	if (FAILED(hr))
	{
		wprintf(L"Failed to get default AppDomain w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

Cleanup:
	pCleanup(pCorRuntimeHost);

	return spDefaultAppDomain;
}

_AssemblyPtr pFind_Assembly(_AppDomainPtr pAppDomain, const wchar_t* pName)
{
	HRESULT hr;
	_AssemblyPtr pCoreLibAssembly;
	{
		SAFEARRAY* rawAssembliesArray;

		if (pAppDomain == NULL)
		{
			wprintf(L"Failed to get CoreLibAssembly, _AppDomainPtr is null");
			return pCoreLibAssembly;
		}

		hr = pAppDomain->GetAssemblies(&rawAssembliesArray);
		/*
		pAppDomain->GetAssemblies(&rawAssembliesArray)
		>> Is< HrSuccess >()
			|| throwX("_AppDomain::GetAssemblies failed");*/
		if (FAILED(hr))
		{
			wprintf(L"_AppDomain::GetAssemblies failed w/hr 0x%08lx\n", hr);
			return pCoreLibAssembly;
		}
		OleVector assemblies(rawAssembliesArray);
		Size const n = assemblies.count();

		//std::cout << n << " assemblies loaded." << std::endl;
		if (n > 0)
		{
			//std::cout << "Array elemtype " << assemblies.elemType() << "." << std::endl;

			ElemAccess< IUnknown* >     elems(assemblies);
			for (Index i = 0; i < n; ++i)
			{
				IUnknownPtr pUnknown(elems.elem(i));
				_AssemblyPtr pAssembly(pUnknown);

				_bstr_t displayName;
				hr = pAssembly->get_ToString(displayName.GetAddress());
				if (FAILED(hr))
				{
					wprintf(L"_Assembly::get_ToString failed w/hr 0x%08lx\n", hr);
					return pCoreLibAssembly;
				}
				/*pAssembly->get_ToString(displayName.GetAddress())
					>> Is< HrSuccess >()
					|| throwX("_Assembly::get_ToString failed");*/
					/*std::cout
						<< i + 1 << ": "
						<< "\"" << displayName.operator char const* () << "\""
						<< std::endl;*/
				if (startsWith(pName, displayName))
				{
					pCoreLibAssembly = pAssembly;
					break;
				}
			}
			assemblies.clear(); // New
			rawAssembliesArray = NULL; // New
		}
		else {
			return pCoreLibAssembly;
		}
	}

	return pCoreLibAssembly;
}

_AssemblyPtr pGetCoreLibAssembly(_AppDomainPtr pAppDomain)
{
	return pFind_Assembly(pAppDomain, L"mscorlib,");
}

std::vector<_AssemblyPtr> pGetAssemblyList(_AppDomainPtr pAppDomain)
{
	std::vector<_AssemblyPtr> pCoreLibAssembly = std::vector<_AssemblyPtr>();

	if (pAppDomain == NULL)
	{
		wprintf(L"Failed to get CoreLibAssembly, _AppDomainPtr is null");
		return pCoreLibAssembly;
	}

	HRESULT hr;

	{
		SAFEARRAY* rawAssembliesArray;
		hr = pAppDomain->GetAssemblies(&rawAssembliesArray);
		if (FAILED(hr))
		{
			wprintf(L"_AppDomain::GetAssemblies failed w/hr 0x%08lx\n", hr);
			return pCoreLibAssembly;
		}

		OleVector assemblies(rawAssembliesArray);
		Size const n = assemblies.count();

		//std::cout << n << " assemblies loaded." << std::endl;
		if (n > 0)
		{
			ElemAccess<IUnknown*> elems(assemblies);
			for (Index i = 0; i < n; ++i)
			{
				IUnknownPtr pUnknown(elems.elem(i));
				_AssemblyPtr pAssembly(pUnknown);

				pCoreLibAssembly.push_back(pAssembly);
			}
			assemblies.clear(); // New
			rawAssembliesArray = NULL; // New
		}
	}

	return pCoreLibAssembly;
}

// Load the assembly from disk
_AssemblyPtr pLoadFromDisk(_AppDomainPtr spDefaultAppDomain, wchar_t* assemblyName)
{
	// The .NET assembly to load.
	bstr_t bstrAssemblyName(assemblyName);

	_AssemblyPtr spAssembly = NULL;

	if (spDefaultAppDomain == NULL)
	{
		wprintf(L"Failed to load the assembly, _AppDomainPtr is null");
		return spAssembly;
	}

	HRESULT hr = spDefaultAppDomain->Load_2(bstrAssemblyName, &spAssembly);
	if (FAILED(hr))
	{
		wprintf(L"Failed to load the assembly %ls w/hr 0x%08lx\n", assemblyName, hr);
	}

	return spAssembly;
}

// Load the assembly from Memory
_AssemblyPtr pLoadFromMemory(_AppDomainPtr spDefaultAppDomain, unsigned char data[], const unsigned int data_length)
{
	_AssemblyPtr spAssembly = NULL;

	if (spDefaultAppDomain == NULL)
	{
		wprintf(L"Failed to load the assembly from Memory, _AppDomainPtr is null");
		return spAssembly;
	}

	SAFEARRAYBOUND bounds[1];
	bounds[0].cElements = data_length;
	bounds[0].lLbound = 0;

	SAFEARRAY* arr = SafeArrayCreate(VT_UI1, 1, bounds);
	SafeArrayLock(arr);
	memcpy(arr->pvData, data, data_length);
	SafeArrayUnlock(arr);

	HRESULT hr = spDefaultAppDomain->Load_3(arr, &spAssembly);

	if (FAILED(hr))
	{
		wprintf(L"Failed to load the assembly from Memory w/hr 0x%08lx\n", hr);
	}

	return spAssembly;
}

_TypePtr pFind_Type(_AssemblyPtr spAssembly, char* ClassName)
{
	_TypePtr spTyped = NULL;
	// The .NET class to instantiate.
	bstr_t bstrClassName(ClassName);

	if (spAssembly == NULL)
	{
		wprintf(L"Failed to get the Type, _AssemblyPtr is null");
	}
	HRESULT hr = spAssembly->GetType_3(bstrClassName, true, &spTyped);
	if (FAILED(hr))
	{
		wprintf(L"Failed to get the Type interface ");
		printf(ClassName);
		wprintf(L" w/hr 0x%08lx\n", hr);
	}

	return spTyped;
}

_TypePtr pFind_Type_2(_AppDomainPtr pAppDomain, char* ClassName)
{
	_TypePtr result = NULL;
	auto allLib = pGetAssemblyList(pAppDomain);
	for (size_t i = 0; i < allLib.size(); i++)
	{
		auto ass = allLib[i];

		result = pFind_Type(ass, ClassName);

		if (result != NULL)
		{
			break;
		}
	}
	allLib.clear(); // New
	return result;
}

_FieldInfo* pFind_Field(_TypePtr spTyped, char* nameField, BindingFlags bindingAttr)
{
	HRESULT hr;
	_FieldInfo* pFieldInfo = NULL;
	bstr_t fieldName(nameField);

	if (spTyped == NULL)
	{
		wprintf(L"Failed to get the Field, _TypePtr is null");
	}

	if (bindingAttr != NULL)
	{
		hr = spTyped->GetField(fieldName, bindingAttr, &pFieldInfo);
	}
	else
	{
		hr = spTyped->GetField_2(fieldName, &pFieldInfo);
	}

	if (FAILED(hr))
	{
		wprintf(L"Failed to get the Field ");
		printf(fieldName);
		wprintf(L" w/hr 0x%08lx\n", hr);
	}

	return pFieldInfo;
}

SAFEARRAY* pToSafeArray(variant_t* var_t, int var_tSize, VARTYPE vt)
{
	SAFEARRAY* psaStaticMethodArgs = NULL;

	psaStaticMethodArgs = SafeArrayCreateVector(vt, 0, var_tSize);

	for (LONG i = 0; i < var_tSize; i++)
	{
		HRESULT hr;

		try {
			hr = SafeArrayPutElement(psaStaticMethodArgs, &i, var_t[i]);
		}
		catch (...) {
			hr = SafeArrayPutElement(psaStaticMethodArgs, &i, &var_t[i]);
		}

		if (FAILED(hr))
		{
			wprintf(L"SafeArrayPutElement failed w/hr 0x%08lx\n", hr);
			return NULL;
		}
	}

	return psaStaticMethodArgs;
}


variant_t pInvoke_Public_Method(_TypePtr spType, wchar_t* methodName, variant_t* command, int argSize)
{
	HRESULT hr;
	bstr_t bstrStaticMethodName(methodName);
	SAFEARRAY* psaStaticMethodArgs = NULL;
	variant_t vtPSInvokeReturnVal;
	variant_t vtEmpty;

	if ((psaStaticMethodArgs = pToSafeArray(command, argSize, VT_VARIANT)) == NULL)
	{
		wprintf(L"Failed ToSafeArray(variant_t*, int)\n");
		return vtPSInvokeReturnVal;
	}

	// Invoke the method from the Type interface.
	hr = spType->InvokeMember_3(
		bstrStaticMethodName,
		static_cast<BindingFlags>(BindingFlags_InvokeMethod | BindingFlags_Public),
		NULL,
		vtEmpty,
		psaStaticMethodArgs,
		&vtPSInvokeReturnVal);
	if (FAILED(hr))
	{
		wprintf(L"Failed to invoke  %ls w/hr 0x%08lx\n", methodName, hr);
		return vtPSInvokeReturnVal;
	}

	SafeArrayDestroy(psaStaticMethodArgs);
	psaStaticMethodArgs = NULL;

	return vtPSInvokeReturnVal;
}

variant_t pInvoke_NonPublic_Method(_TypePtr spType, wchar_t* methodName, variant_t* command, int argSize)
{
	HRESULT hr;
	bstr_t bstrStaticMethodName(methodName);
	SAFEARRAY* psaStaticMethodArgs = NULL;
	variant_t vtPSInvokeReturnVal;
	variant_t vtEmpty;

	if ((psaStaticMethodArgs = pToSafeArray(command, argSize, VT_VARIANT)) == NULL)
	{
		wprintf(L"Failed ToSafeArray(variant_t*, int)\n");
		return vtPSInvokeReturnVal;
	}

	// Invoke the method from the Type interface.
	hr = spType->InvokeMember_3(
		bstrStaticMethodName,
		static_cast<BindingFlags>(BindingFlags_InvokeMethod | BindingFlags_NonPublic),
		NULL,
		vtEmpty,
		psaStaticMethodArgs,
		&vtPSInvokeReturnVal);
	if (FAILED(hr))
	{
		wprintf(L"Failed to invoke  %ls w/hr 0x%08lx\n", methodName, hr);
		return vtPSInvokeReturnVal;
	}

	SafeArrayDestroy(psaStaticMethodArgs);
	psaStaticMethodArgs = NULL;

	return vtPSInvokeReturnVal;
}

variant_t pInvoke_Public_Static_Method(_TypePtr spType, wchar_t* methodName, variant_t* command, int argSize)
{
	HRESULT hr;
	bstr_t bstrStaticMethodName(methodName);
	SAFEARRAY* psaStaticMethodArgs = NULL;
	variant_t vtPSInvokeReturnVal;
	variant_t vtEmpty;

	if ((psaStaticMethodArgs = pToSafeArray(command, argSize, VT_VARIANT)) == NULL)
	{
		wprintf(L"Failed ToSafeArray(variant_t*, int)\n");
		return vtPSInvokeReturnVal;
	}

	// Invoke the method from the Type interface.
	hr = spType->InvokeMember_3(
		bstrStaticMethodName,
		static_cast<BindingFlags>(BindingFlags_InvokeMethod | BindingFlags_Static
			| BindingFlags_Public),
		NULL,
		vtEmpty,
		psaStaticMethodArgs,
		&vtPSInvokeReturnVal);
	if (FAILED(hr))
	{
		wprintf(L"Failed to invoke  %ls w/hr 0x%08lx\n", methodName, hr);
		return vtPSInvokeReturnVal;
	}

	SafeArrayDestroy(psaStaticMethodArgs);
	psaStaticMethodArgs = NULL;

	return vtPSInvokeReturnVal;
}

variant_t pInvoke_NonPublic_Static_Method(_TypePtr spType, wchar_t* methodName, variant_t* command, int argSize)
{
	HRESULT hr;
	bstr_t bstrStaticMethodName(methodName);
	SAFEARRAY* psaStaticMethodArgs = NULL;
	variant_t vtPSInvokeReturnVal;
	variant_t vtEmpty;

	if ((psaStaticMethodArgs = pToSafeArray(command, argSize, VT_VARIANT)) == NULL)
	{
		wprintf(L"Failed ToSafeArray(variant_t*, int)\n");
		return vtPSInvokeReturnVal;
	}

	// Invoke the method from the Type interface.
	hr = spType->InvokeMember_3(
		bstrStaticMethodName,
		static_cast<BindingFlags>(BindingFlags_InvokeMethod | BindingFlags_Static
			| BindingFlags_NonPublic),
		NULL,
		vtEmpty,
		psaStaticMethodArgs,
		&vtPSInvokeReturnVal);
	if (FAILED(hr))
	{
		wprintf(L"Failed to invoke  %ls w/hr 0x%08lx\n", methodName, hr);
		return vtPSInvokeReturnVal;
	}

	SafeArrayDestroy(psaStaticMethodArgs);
	psaStaticMethodArgs = NULL;

	return vtPSInvokeReturnVal;
}
