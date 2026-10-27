#include <stdio.h>
void main()
{
	int i = 1;
	int j = 0;
	int n = 0;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	
	while(j++ <10)		//先和10比再相加 
	{
		printf("%d\n",j);
	}
	
	while(++n <=10)		//先加再和10比 
	{
		printf("%d\n",n);
	}
}
