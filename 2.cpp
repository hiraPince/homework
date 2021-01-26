#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x>=90&&x<=100)
	{
		printf("A=%lf",x);
	}
	else
	{
		if(80<=x&&x<90)
		{
		printf("B=%lf",x);
		}
		else
		{
			if(70<=x)
			{
				printf("C=%lf",x);
			}
			else
			{			
				if(60<=x)
				{
					printf("D=%lf",x);
				}
				else
				{
					printf("E=%lf",x);
				
				}
			}
		}
	}
	return 0;
}
