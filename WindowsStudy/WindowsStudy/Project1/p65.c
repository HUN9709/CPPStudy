#include "example.h"

#include <stdio.h>
#include <windows.h>

int p65(void)
{
	LPSTR str1 = "SBCS Style String 1";
	LPWSTR str2 = L"WBCS Style String 1";

	CHAR arr1[] = "SBCS Style String 2";
	WCHAR arr2[] = L"WBCS Style String 2";

	LPCSTR cStr1 = arr1;
	LPCWSTR cStr2 = arr2;

	printf("%s\n%s\n", str1, arr1);
	wprintf(L"%s\n%s", str2, arr2);

	return 0;
}