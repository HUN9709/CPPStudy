#include "example.h"

int p484(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));

	while (1)
	{
		printf("¾ç¼ö¸¸ => ");
		scanf_s("%d", &num);

		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}

		pi[count++] = num;
	}

	for (int i = 0; i < count; ++i)
	{
		printf("%d ", pi[i]);
	}

	free(pi);

	return 0;
}