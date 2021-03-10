#include<stdio.h>
#include<math.h>
void CalculateRealRoot(double a1,double b1,double c1);
int main(void)
{
	double a,b,c,d;
	printf("please input a:");
	scanf("%lf",&a);
	printf("please input b:");
	scanf("%lf",&b);
	printf("please input c:");
	scanf("%lf",&c);
	printf("please input d:");
	scanf("%lf",&d)
	CalculateRealRoot(a,b,c,d);
	return 0;
}
