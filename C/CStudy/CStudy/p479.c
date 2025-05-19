#include "example.h"

int p479(void)
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("No have mem");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("%d\n", *pi);
	printf("%.2lf", *pd);

	free(pi);
	free(pd);
}