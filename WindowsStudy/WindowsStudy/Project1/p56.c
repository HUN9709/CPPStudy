#include "example.h"

#include <stdio.h>
#include <string.h>

int p56(void)
{
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = wcslen(str);

	wprintf(L"%d %d", size, len);
}