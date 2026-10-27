#include <stdio.h>
void main()
{
	unsigned char ch = 291;
	printf("\n%d %c",ch,ch);
	for(ch=0;ch<=254;ch++)
		printf("\n%d %c",ch,ch);
	printf("\n%d %c",ch,ch);
}
