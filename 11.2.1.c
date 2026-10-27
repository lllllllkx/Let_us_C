#include <stdio.h>
void main()
{
	int avg = 346;
	float per = 69.2;
	printf("Average = %d\nPercentage = %f",avg,per);
	
	int weight = 63;
	printf("\nweight is %d kg",weight);
	printf("\nweight is %2d kg",weight);
	printf("\nweight is %4d kg",weight);
	printf("\nweight is %6d kg",weight);
	printf("\nweight is %-6d kg",weight);
	printf("\nweight is %1d kg\n",weight);
	
	printf("\n%10.1f %10.1f %10.1f",5.0,13.5,133.9);
	printf("\n%10.1f %10.1f %10.1f\n",3.5,1200.9,3005.3);
	
	char firstname1[] = "Sandy";
	char surname1[] = "Malya";
	char firstname2[] = "AjayKumar";
	char surname2[] = "Gurubaxani";
	
	printf("\n%20s%20s",firstname1,surname1);
	printf("\n%20s%20s\n",firstname2,surname2);
	
	printf("You\tmust\tbe\tcrazy\nto\thate\tthis\tbook\n");
	
	printf("He said,\"Let's do it!\"\n");
	
	char ch = 'z';
	int i = 125;
	float a = 12.55;
	char s[] = "Hello there!";
	
	printf("\n%c %d %f",ch,ch,ch);
	printf("\n%c %d %f",s,s,s);
	printf("\n%c %d %r",i,i,i);
	printf("\n%f %d",a,a);
}
