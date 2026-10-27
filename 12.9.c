#include <stdio.h>
#include <conio.h>
void main()
{
	FILE *fp;
	char another = 'Y';
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	
	fp = fopen("EMP.DAT","wb");
	
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	while(another=='Y')
	{
		printf("\nEnter name,age and basic salary:");
		scanf("%s %d %f\n",e.name,&e.age,&e.bs);
		fwrite(&e,sizeof(e),1,fp);
		
		printf("Add another record(Y/N)");
		fflush(stdin);
		another = getche();
	}
	fclose(fp);
}
