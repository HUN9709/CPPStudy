#include "example.h"


int p482(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("no have mem");
		exit(1);
	}

	printf("5명 나이 입력 :");
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", &pi[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("%d \t", pi[i]);
	}
	
	return 0;
}