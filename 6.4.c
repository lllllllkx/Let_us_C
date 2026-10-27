#include <stdio.h>
void main()
{
	char c;
	unsigned char d;
	int i;
	unsigned int j;
	short int k;
	unsigned short int l;
	long int m;
	unsigned long int n;
	float x;
	double y;
	long double z;
	printf("char c,d\n");
	scanf("%c %c",&c,&d);
	printf("%c %c\n",c,d);
	printf("int i,j\n");
	scanf("%d %u",&i,&j);
	printf("%d %u\n",i,j);
	printf("short int k,l\n");
	scanf("%d %u",&k,&l);
	printf("%d %u\n",k,l);
	printf("longt int m,n\n");
	scanf("%ld %lu",&m,&n);
	printf("%ld %lu\n",m,n);
	printf("float x,double y,long double z\n");
	scanf("%f %lf %Lf",&x,&y,&z);
	printf("%f %lf %Lf",x,y,z);
}
