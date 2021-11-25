#include <stdio.h>
#include <stdlib.h>
#include "io_mas.c"

double sredn (double a[], int n)
{
	int i;
	double avg = 0;
	for (i=0; i < n; i++)
		avg+=a[i];
	return avg/n;
}

int int main(void)
{
	/* code */
	return 0;
}