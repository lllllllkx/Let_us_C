//Calculation of simple interest for 3 sets of p,n and r
#include <stdio.h>
void main()
{
	int p,n,count;
	float r,si;
	for (count = 1;count<=3;count++)
	{
		printf("\nEnter values of p,n and r");
		scanf("%d %d %f",&p,&n,&r);
		si = p * n * r / 100;
		printf("Simple interest = Rs. %f",si);
	}
}
/*for (initialise counter;test counter;increment counter)
{
	do this;
	and this;
	and this;
}*/
