#include<stdio.h>
int main()
{
	double a,b,c=1,d=0;
	for(a=1;a<=10;a++)
	{
		
		for(b=1;b<=a;b++)
			c*=b;
		d+=1/c;
	}
	printf("%lf",d);
	return 0;

}
