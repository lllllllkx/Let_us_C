#include <stdio.h>
int *fun();
void main()
{
	int *j;
	int *fun();
	j = fun();
	printf("\n%d",*j);
} 
int *fun()
{
	int k = 35;
	return(&k); 
}
