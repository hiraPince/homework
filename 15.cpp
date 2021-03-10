#include<stdio.h>
#include<math.h>
int main()
{
	double a,n;
	for(a=5000;a*pow((1+0.0017),n)<=70000;n++)
	{
		a=a+5000;
	}
	printf("n=%lf",n);
	return 0;
}
