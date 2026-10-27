#include <stdio.h>
int g(int);
void main()
{
	int i,j;
	for(i = 1;i<5;i++)
	{
		j = g(i);
		printf("\n%d",j);
	}
}
int g(int x)
{
	static int v = 1;
	int b = 3;
	v += x;
	return(v+x+b);
}
