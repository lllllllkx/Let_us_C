#include <stdio.h>
void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("PC1.C","r");
	while(1)
	{
		ch = fgetc(fp);
		if(ch==EOF)
			break;
			
		printf("%c",ch);
	}
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	fclose(fp);
}
