#include <stdio.h>


int main (void)
{
	int *p, a;
	
	a = 100;
	p = &a;
	a = *p;	

	printf("Адр p = %p\n a = %d\n", p, a);

	//printf("Адр ad = %d\n pp = %p\n ap = %p\n", a, p, a, p);
}
