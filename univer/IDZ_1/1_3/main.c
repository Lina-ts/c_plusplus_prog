#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 20

// первая заданная функция
double f1(double x)
{
	return x*sin(x);
}

// вторая заданная функция
double f2(double x)
{
	return 2*x/exp(2*x);
}

// ф-ция интегрирования методом парабол
double integral(double (*f)(double), double a, double b)
{
	int i;
	double h = (b-a)/N;
	double k1 = 0, k2 = 0;
	for (i = 1; i < N; i+=2)
	{
		k1 += f(a + i*h);
		k2 += f(a + (i+1)*h);
	}
	return h/3*(f(a) + 4*k1 + 2*k2);
}

int main (void)
{
	printf("Intergral of 0.5 to 4 x*sin(x) = %.3lf\n", integral(f1, 0.5, 4));
	printf("Intergral of -1 to 3 2*x/exp(2*x) = %.3lf\n", integral(f2, -1, 3));

	system("pause");
	return 0;
}