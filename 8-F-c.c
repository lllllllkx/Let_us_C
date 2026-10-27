#include <stdio.h>
void main()
{
	int a[] = {10,20,30,40,50};
	int *j;
	j = a;
	j = j + 3;
	printf("\n%d",*j);
}
