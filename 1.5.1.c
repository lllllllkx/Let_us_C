//Calculation of simple interest
#include <stdio.h> 

void main()
{
    int p,n;		//declaration
    float r,si;		//declaration
    
    printf("Enter values of p,n,r");
    scanf("%d %d %f",&p,&n,&r);
    
    /*formula for simple interest*/
    si = p * n * r/100;		//usage
    
    printf("%f",si);		//printf("<format string>",<list of variables>);
}
