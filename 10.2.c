//Usage of an arry of structures
#include <stdio.h>
void main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b[100];
	int i;
	for(i=0;i<=99;i++)
	{
		printf("\nEnter names,prices and pages");
		scanf("%c %f %d",&b[i].name,&b[i].price,&b[i].pages);
	}
	printf("\nAnd this is what you entered\n");
	for(i=0;i<=99;i++)
		printf("%c %f %d\n",b[i].name,b[i].price,b[i].pages); 
	void linkfloat()
	{
		float a = 0,*b;
		b = &a;//cause emulator tobe linked
		a = *b;//suppress the warning-variable not used
	}
}
