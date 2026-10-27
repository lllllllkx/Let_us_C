#include <stdio.h>
/*void main()
{
	struct book
	{
	char name[25];
	char author[25];
	int callno;
	};
	struct book b1 = {"Let us C","YPK",101};
	struct book *ptr;
	ptr = &b1;
	printf("\n%s %s %d",b1.name,b1.author,b1.callno);
	printf("\n%s %s %d",ptr->name,ptr->author,ptr->callno);
}*/
//Passing address of a structure variable
struct book
{
	char name[25];
	char author[25];
	int callno;
};
void display(struct book *);
void main()
{
	struct book b1 = {"Let us C","YPK",101};
	display(&b1);
}
void display(struct book *b)
{
	printf("\n%s %s %d",b->name,b->author,b->callno);
}
