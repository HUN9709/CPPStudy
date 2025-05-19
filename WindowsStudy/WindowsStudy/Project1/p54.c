#include "example.h"

#include <stdio.h>
#include <string.h>

int p54(void)
{
	char str[] = "한글입니다";

	for (int i = 0; i < 5; ++i)
	{
		fputc(str[i], stdout);
	}

	fputs("\n", stdout);

	for (int i = 0; i < 10; ++i)
	{
		fputc(str[i], stdout);
	}
}