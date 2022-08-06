#pragma region Includes and Imports
#pragma once

#include <windows.h>
#include <comdef.h>
#include <mscoree.h>

#include <metahost.h>

#pragma comment(lib, "mscoree.lib")

// Import mscorlib.tlb (Microsoft Common Language Runtime Class Library).
#import "mscorlib.tlb" raw_interfaces_only				\
    high_property_prefixes("_get","_put","_putref")		\
    rename("ReportEvent", "InteropServices_ReportEvent")

using namespace mscorlib;
#pragma endregion

//HRESULT pCreateCLRRuntimeHost(LPCWSTR version, ICLRRuntimeHost** pClrRuntimeHost);

HRESULT pCreateCorRuntimeHost(LPCWSTR version, ICorRuntimeHost** pCorRuntimeHost);

//cpp
#pragma warning(disable:4996) // CorBindToRuntime

HRESULT pCreateDotNetFourHost(LPCWSTR version,
	ICorRuntimeHost** pCorRuntimeHost)
{
	HRESULT hr = NULL;
	ICLRMetaHost* pMetaHost = NULL;
	ICLRRuntimeInfo* pRuntimeInfo = NULL;

	bool hostCreated = false;

	hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_PPV_ARGS(&pMetaHost));
	if (FAILED(hr))
	{
		// Potentially fails on .NET 2.0/3.5 machines with E_NOTIMPL
		wprintf(L"CLRCreateInstance failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}
	// Get the runtime information for the particular version of .NET
	hr = pMetaHost->GetRuntime(version, IID_PPV_ARGS(&pRuntimeInfo));
	if (FAILED(hr))
	{
		wprintf(L"ICLRMetaHost::GetRuntime failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	// Check if the specified runtime can be loaded into the process. This
	// method will take into account other runtimes that may already be
	// loaded into the process and set pbLoadable to TRUE if this runtime can
	// be loaded in an in-process side-by-side fashion.
	BOOL loadable;
	hr = pRuntimeInfo->IsLoadable(&loadable);
	if (FAILED(hr))
	{
		wprintf(L"ICLRRuntimeInfo::IsLoadable failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	if (!loadable)
	{
		wprintf(L".NET runtime %ls cannot be loaded\n", version);
		goto Cleanup;
	}

	// Load the CLR into the current process and return a runtime interface
	// pointer.
	hr = pRuntimeInfo->GetInterface(CLSID_CorRuntimeHost, IID_PPV_ARGS(pCorRuntimeHost));
	if (FAILED(hr))
	{
		wprintf(L"ICLRRuntimeInfo::GetInterface failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	hostCreated = true;

Cleanup:

	if (pMetaHost)
	{
		pMetaHost->Release();
		pMetaHost = NULL;
	}
	if (pRuntimeInfo)
	{
		pRuntimeInfo->Release();
		pRuntimeInfo = NULL;
	}

	return hostCreated;
}

HRESULT pCreateDotNetTwoHost(LPCWSTR version, ICorRuntimeHost** pCorRuntimeHost)
{
	HRESULT hr = NULL;
	bool hostCreated = false;

	hr = CorBindToRuntime(version, L"wks", CLSID_CorRuntimeHost, IID_PPV_ARGS(pCorRuntimeHost));
	if (FAILED(hr))
	{
		wprintf(L"CorBindToRuntime failed w/hr 0x%08lx\n", hr);
		goto Cleanup;
	}

	hostCreated = true;

Cleanup:

	return hostCreated;
}

/*ICLRRuntimeHost* pCreateHost(LPCWSTR dotNetVersion)
{
	HRESULT hr;

	ICLRMetaHost* pClrMetaHost = NULL;
	ICLRRuntimeInfo* pClrRuntimeInfo = NULL;
	ICLRRuntimeHost* pClrRuntimeHost = NULL;

	// Get the CLRMetaHost that tells us about .NET on this machine
	hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&pClrMetaHost);
	if (hr == S_OK)
	{
		// Get the runtime information for the particular version of .NET
		hr = pClrMetaHost->GetRuntime(dotNetVersion, IID_PPV_ARGS(&pClrRuntimeInfo));
		if (hr == S_OK)
		{
			// Check if the specified runtime can be loaded into the process. This
			// method will take into account other runtimes that may already be
			// loaded into the process and set pbLoadable to TRUE if this runtime can
			// be loaded in an in-process side-by-side fashion.

			BOOL fLoadable;
			hr = pClrRuntimeInfo->IsLoadable(&fLoadable);
			if ((hr == S_OK) && fLoadable)
			{
				// Load the CLR into the current process and return a runtime interface
				// pointer.
				hr = pClrRuntimeInfo->GetInterface(CLSID_CLRRuntimeHost,
					IID_PPV_ARGS(&pClrRuntimeHost));
				if (hr == S_OK)
				{
					return pClrRuntimeHost;
				}
			}
		}
	}

	if (pClrRuntimeInfo)
	{
		pClrRuntimeInfo->Release();
		pClrRuntimeInfo = NULL;
	}
	if (pClrMetaHost)
	{
		pClrMetaHost->Release();
		pClrMetaHost = NULL;
	}

	return NULL;
}*/

/*HRESULT pCreateCLRRuntimeHost(LPCWSTR version, ICLRRuntimeHost** pClrRuntimeHost)
{
	ICLRRuntimeHost* pClrRuntimeHost2 = pCreateHost(version); // L"v4.0.30319"
	if (pClrRuntimeHost2 != NULL) {
		*pClrRuntimeHost = pClrRuntimeHost2;
		return true;
	}
	return false;
}*/

HRESULT pCreateCorRuntimeHost(LPCWSTR version, ICorRuntimeHost** pCorRuntimeHost)
{
	bool hostCreated = false;

	if (pCreateDotNetFourHost(version, pCorRuntimeHost) ||
		pCreateDotNetTwoHost(version, pCorRuntimeHost))
	{
		hostCreated = true;
	}

	return hostCreated;
}
