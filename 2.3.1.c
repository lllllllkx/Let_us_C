//A quick demo of nested if-else
#include <stdio.h>

main()
{
	int i;
	printf("Enter either 1 or 2");
	scanf("%d",&i);
	
	if(i==1)
		printf("You would goto heaven!");
	else
	{
		if(i==2)
			printf("Hell was created with you in mind");
		else
			printf("How about mother earth!");
	}
}
