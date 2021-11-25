#include <stdio.h>
#include <stdlib.h>
#define M1 10
#define M2 18
#define M3 26

int main()
{
	int a[M1], i, j;

	for(i=0;i<M1;i++)
		scanf("%d", &a[i]);
	for(i=0; i< M1 - 1; i++)
		for(j=0; j<M1-i-1; j++) {
			if (a[j] > a[i + 1]) {
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	/*for(i=0;i<M1;i++)
		printf("%d\t", a[i]);
	printf("\n");*/

	for(j=0;j<M1;j++)
                printf("%d\t", a[j]);
        printf("\n");


	return 0;

}
