//Calculation of simple interest
#include <stdio.h> 

void main()
{
    int p,n;		//declaration
    float r,si;		//declaration
    
    p = 1000;
    n = 3;
    r = 8.5;
    
    /*formula for simple interest*/
    si = p * n * r/100;		//usage
    
    printf("%f",si);		//printf("<format string>",<list of variables>);
	printf("%d %d %f %f",p,n,r,si);
	printf("Simple interest = Rs. %f",si);
	printf("Prin = %d\nRate = %f",p,r);
}
