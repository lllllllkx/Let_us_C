#include <stdio.h>
int x = 21;

void main()
{
	extern int y;
	printf("\n%d %d",x,y);
}
int y = 31;
