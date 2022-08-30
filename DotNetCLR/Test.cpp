#pragma once
#include "mscorlib/Initialize.h"

#include <unordered_map>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <any>
#include <typeinfo>
#include <mutex>

// Load the assembly from disk
/*void loadFromDisk(_AppDomainPtr pAppDomainPtr)
{
	auto dsdfs = pLoadFromDisk(pAppDomainPtr, L"ProxyGenerator");

	_MethodInfo* dada;
	dsdfs->get_EntryPoint(&dada);

	variant_t targetObject0;
	targetObject0.vt = VT_NULL;

	SAFEARRAY* vtArg0 = { };
	variant_t result0;
	dada->Invoke_3(targetObject0, vtArg0, &result0);
}*/

_MethodInfo* WriteLine(ICorRuntimeHost* pCorRuntimeHost)
{
	HRESULT hr;

	_TypePtr methodfindInType = System::Console::_Console;
	bstr_t methodName = L"WriteLine";

	_TypePtr argumentType = System::String::_String;

	IUnknown* methodArgumentType(argumentType);
	variant_t methodArgumentTypes[] = { methodArgumentType };

	_MethodInfo* methodInfo;

	hr = methodfindInType->GetMethod_5(methodName, pToSafeArray(methodArgumentTypes, GetArraySize(methodArgumentTypes), VT_UNKNOWN), &methodInfo);
	if (FAILED(hr))
	{
		wprintf(L"GetMethod_5 failed w/hr 0x%08lx\n", hr);

		// Release
		pCleanup(pCorRuntimeHost);
		return nullptr;
	}
	return methodInfo;
}

variant_t Invoke_WriteLine(ICorRuntimeHost* pCorRuntimeHost)
{
	HRESULT hr;

	_TypePtr pConsole = System::Console::_Console;

	variant_t targetObject(static_cast<IUnknown*>(pConsole));
	variant_t arguments[] = { variant_t(L"Hello World") };
	variant_t outputResult;

	_MethodInfo* methodInfo = WriteLine(pCorRuntimeHost);
	if (methodInfo != nullptr)
	{
		// invoke method to write to console
		hr = methodInfo->Invoke_3(targetObject, pToSafeArray(arguments, GetArraySize(arguments), VT_VARIANT), &outputResult);
		if (FAILED(hr))
		{
			wprintf(L"Invoke_3 failed w/hr 0x%08lx\n", hr);

			// Release
			pCleanup(pCorRuntimeHost);
		}
	}
	return outputResult;
}

ICorRuntimeHost* Initialize(LPCUWSTR dotNetVersion)
{
	ICorRuntimeHost* pCorRuntimeHost = NULL;

	// start
	_AppDomainPtr pAppDomainPtr = pGetAppDomainPtr(dotNetVersion, pCorRuntimeHost);
	if (pAppDomainPtr == NULL)
	{
		// Release
		pCleanup(pCorRuntimeHost);
		return nullptr;
	}

	// get mscorlib
	_AssemblyPtr pAssemblyPtr = pGetCoreLibAssembly(pAppDomainPtr);
	
	// initialize mscorlib
	Initialize(pAssemblyPtr);

	return pCorRuntimeHost;
}

int main(int argc)
{
	ICorRuntimeHost* pCorRuntimeHost = Initialize(L"v4.0.30319");

	Invoke_WriteLine(pCorRuntimeHost);

	// Release
	pCleanup(pCorRuntimeHost);

	return 0;
}
