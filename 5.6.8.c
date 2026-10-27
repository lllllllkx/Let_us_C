#include <stdio.h>
int add(int,int);
void main()
{
	int a = 5,b = 2,c;
	c = add(a,b);
	printf("sum = %d",c);
}
int add(int i,int j)
{
	int sum;
	sum = i + j;
	return sum;
}
