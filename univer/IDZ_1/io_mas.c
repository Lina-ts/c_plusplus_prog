#include <stdio.h>

void in_mas (double mas[], int n)
{
	for (;n>0;n--)
		scanf("%lf", mas++);
}
void out_mas (double mas[], int m, int n)
{
	int i;
	for (;m>0;m--)
	{
		for (i=0; i<n; i++)
			printf("%8.2lf",*mas++);
		printf("\n");
	}
}
