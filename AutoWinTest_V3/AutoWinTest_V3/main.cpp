// AutoWinTest.cpp : Defines the entry point for the console application.
//

//#include <stdafx.h>
#include <windows.h>
#include <winuser.h>

#include <iostream>

#include <string>

//using namespace std;

int main()
{
	HWND hwnd  = FindWindowA(NULL, "Calculator");
	UINT hwndval = (UINT)hwnd;
	std::string hwndstr; //= std::to_string(hwndval);
	
	SendMessage(hwnd, WM_CLOSE, NULL, NULL);

	std::cout << hwndstr<< "hwnd\n";
	//return 0;

	//BOOL EnableWindow(HWND hWnd, BOOL bEnable);

	
adfgasdgadfgadfgadfg
}

 