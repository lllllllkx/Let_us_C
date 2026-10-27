#include <stdio.h>
void fun(int *,int *);
void main()
{
	int i = 5,j = 2;
	fun(&i,&j);
	printf("\n%d %d",i,j);
} 
void fun(int *i,int *j)
{
	*i = *i * *i;
	*j = *j * *j;
}
//25 4
