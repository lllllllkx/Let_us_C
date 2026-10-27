#include <stdio.h>
void main()
{
	auto int i,j;
	printf("\n%d %d",i,j);  //0,1
	auto int n = 1;
	{
		{
			{
				printf("\n%d",n);
			}
			printf("%d",n);
		}
		printf("%d",n);
	}//111
	auto int m = 1;
	{
		auto int m = 2;
		{
			auto int m = 3;
			printf("\n%d",m);
		}
		printf("%d",m);
	}
	printf("%d",m);//321
}
