#include <stdio.h>
void fun(int *x,int y);
void main()
{
	int i = 4,j = 2;
	fun(&i,j);
	printf("\n%d %d",i,j);
}
void fun(int *i,int j)
{
	*i = *i * *i;
	j = j * j;
}
//16 2
