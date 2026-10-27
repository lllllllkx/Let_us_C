//Passing individual structure elements
#include <stdio.h>
/*void display(char *,char *,int);
void main()
{
	struct book
	{
	char name[25];
	char author[25];
	int callno;
	};
	struct book b1 = {"Let us C","YPK",101};
	display(b1.name,b1.author,b1.callno);
}
void display(char *s,char *t,int n)
{
	printf("\n%s %s %d",s,t,n);
}*/

struct book
{
	char name[25];
	char author[25];
	int callno;
};
void display(struct book);
void main()
{
	struct book b1 = {"Let us C","YPK",101};
	display(b1);
}
void display(struct book b)
{
	printf("\n%s %s %d",b.name,b.author,b.callno);
}
