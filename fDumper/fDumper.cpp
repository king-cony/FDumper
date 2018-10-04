// fDumper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "curl/curl.h"

#include "fDumper.h"
#include "Menu.h"



int APIENTRY wWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPWSTR /*lpCmdLine*/, int /*nCmdShow*/)
{
	curl_global_init(CURL_GLOBAL_ALL);
	
	//INITCOMMONCONTROLSEX icx;
	//icx.dwSize = sizeof(icx);
	//icx.dwICC = ICC_STANDARD_CLASSES | ICC_PROGRESS_CLASS;
	//auto ret = InitCommonControlsEx(&icx);

	CMainDialog dlg;
	dlg.RunModeless();

	curl_global_cleanup();

	return 0;
}

