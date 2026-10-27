#include <stdio.h>
#include <functions.c>

int i = 35;
int fun1();
int fun2();

void main()
{
	pirntf("%d",i);
	fun1();
	fun2(); 
}

//FUNCTIONS.C
extern inti;
int fun1()
{
	i++;
	printf("\n%d",i);
	return 0;
}
int fun2()
{
	i--;
	printf("\n%d",i);
	return 0;
} 
