#include <stdio.h>
#include <stdlib.h>
#include "io_mas.c"

//функция для подсчета суммы 
double S (double a[], int n)
{
	int i;
	double S = 0;
	for (i = 0; i < n; i++)
		if (a[i] > 0) 
			S+=a[i];
	return S;
}
//функция для подсчета количества
int K (double a[], int n)
{
	int i;
	int K = 0;
	for (i = 0; i < n; i++)
		if (a[i] > 0)
			K++;
	return K;
}

int main(void)
{
	int test = 0, ma, mb;
	printf("test mode (yes - 1, no - 0): ");
	scanf("%d",&test);

	if (test)
		ma = 3, mb = 4;
	else
		ma = 75, mb = 60;

	double A[ma], B[mb];

	printf("Array A(%d)\n", ma);
	in_mas(A, ma);
	//in_mas((double*)A, ma);
	printf("Array B(%d)\n", mb);
	in_mas(B, mb);
	//in_mas((double*)B, mb);

	printf("\nArray A:\n");
	out_mas((double*)A, ma);
	printf("\nArray B:\n");
	out_mas((double*)B, mb);

	printf("Z = (%.2lf + %.2lf)/(%d + %d) = %.2lf\n", S(A,ma),S(B,mb),K(A,ma),K(B,mb),
		(S(A,ma)+S(B,mb))/(K(A,ma)+K(B,mb)));
	return 0;
}
