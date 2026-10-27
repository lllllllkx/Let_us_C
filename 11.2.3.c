#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	
	printf("\nPress any key to continue");
	getch();
	
	printf("\nType any character");
	ch = getche();
	
	printf("\nType any character");
	getchar();
	printf("\ncontinue Y/N");
	fgetchar();
	
	char ch1 = 'A';
	
	putch(ch1);
	putchar(ch1);
	fputchar(ch1);
	putch('z');
	putchar('z');
	fputchar('z');
	
	char name[50];
	
	printf("\nEnter name");
	scanf("%s",name);
	printf("%s",name);
	
	char footballer[40];
	
	puts("Enter name");
	gets(footballer);
	puts("Happy footballing!");
	puts(footballer);
}
