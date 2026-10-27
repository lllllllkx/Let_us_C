#include <stdio.h>
#include <string.h>
void main()
{
	char source[] = "Sayonara";
	char target[20];
	strcpy(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
}

/*void xstrcpy(char *t,char *s)
{
	while(*s != '\0')
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}
void main()
{
	char source[] = "Sayonara";
	char target[20];
	xstrcpy(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
}*/

