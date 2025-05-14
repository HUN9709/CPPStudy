#include "example.h"

int p502(void)
{
	int num;

	printf("양수입력 : ");
	scanf("%d", &num);

	for (int i = 2; i < num; ++i)
	{
		printf("\t");

		int is_prime = 0;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				is_prime = 1;
				break;
			}
		}

		if (is_prime)
		{
			printf("X");
		}
		else
		{
			printf("%d", i);
		}

		if ((i - 1) % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}