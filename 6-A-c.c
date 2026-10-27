#include <stdio.h>
int i = 0;
void val();
void main()
{
	printf("\nmain's i = %d",i);
	i++;
	val();
}
void val()
{
	i = 100;
	printf("\nval's i = %d",i);
	i++;
} 
