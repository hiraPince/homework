#include<stdio.h>
#include<math.h>
int main()
{
	double a,n;
	for(a=5000;a*pow((1+0.0032),n)<=600000;n++)
	{
		printf("n=%lf",n);
	}
	return 0;
}
