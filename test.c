#include <stdio.h>

template <class T>
int compare (T a, T b)
{
    return a > b ? 1 : a < b ? -1 : 0;
}

int main()
{
 	int a = compare ("1+1", "2");
	printf("%d", a);
    return 0;
}
