#include<stdio.h>
int main()
{
	double a,b=700000,c;
	for(a=5000;a<b;c++)
	{
		a=5000+a;
		a=a*1.0048;
	}
	printf("the year is %d",c);
	return 0;
}
