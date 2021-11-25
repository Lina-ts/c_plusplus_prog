#include <stdio.h>
#define M1 20
#define M2 18
#define M3 26
int main()
{
	int a[M1];// a[M2], a[M3];
	int i;

	for (i=0;i<M1;i++)
		scanf("%d", &a[i]);
	for (i=0;i<M1;i++)
		printf("a[%d] = %d", i, a[i]);


	return 0;

}
