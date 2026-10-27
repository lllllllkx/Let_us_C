//Program to demonstrate printing of a string
#include <stdio.h>
void main()
{
	char name[] = "Klinsman";
	int i = 0;
	while(i <= 7)	//while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
}
