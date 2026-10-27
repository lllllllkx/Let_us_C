#include <stdio.h>
void main()
{
	static int i = 0;
	i++;
	if(i<=5)
	{
		printf("\n%d",i);
		main();
	}
	else
		exit(0);
}
/*1
2
3
4
5*/
