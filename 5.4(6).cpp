#include<stdio.h>
int main()
{
	double a[10];
	double n=0.0;
	int i;
	for(i=0;i<10;i++)
	scanf("%lf",&a[i]);
	for(i=0;i<10;i++)
	{
		n+=1/a[i];
	}		
	printf("%lf",n);
	return 0;	
}
