#include <stdio.h>
int x = 10;
void display();
void main()
{
	int x = 20;
	printf("\n%d",x);
	display();
}
void display()
{
	printf("\n%d",x);
}
