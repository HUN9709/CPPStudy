#include "example.h"

#define UNICODE
#define _UNICODE

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int p68(void)
{
	TCHAR str[] = _T("1234567");
	int size = sizeof(str);
	printf("%d", size);
}