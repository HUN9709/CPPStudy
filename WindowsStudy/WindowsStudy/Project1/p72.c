#include "example.h"

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int p72(void)
{
	LPTSTR str1 = _T("MBCS or WBCS 1");
	TCHAR str2[] = _T("MBCS or WBCS2");
	TCHAR str3[100];
	TCHAR str4[50];

	LPCTSTR pStr = str1;

	_tprintf(_T("string size"));
}
