#include <stdio.h>
#include <stdlib.h>
#include "io_mas.c" 
#define NA 8
#define MA 6
#define NB 18

int sredn (double a[], int n); //прототип ф-ции 

int main(void)
{
	double a[NA][MA], b[NB], avg_b; 
	int i, count=0;
	printf("Enter an array A(%dx%d)\n", NA, MA);
	in_mas ((double*)a, NA*MA);
	printf("Enter an array B(%d)\n", NB);
	in_mas (b,NB);
	avg_b=sredn (b, NB);
	for (i=0;i<NA;i++)
		if (sredn (a[i], MA)>avg_b)
			count++;
	printf("%d rows\n", count);
	system ("pause");	

	return 0;
}	

int sredn (double a[], int n)
{
	int i;
	double avg=0;
	for (i=0;i<n;++i)
		avg+=a[i];
	return avg/n;
}

