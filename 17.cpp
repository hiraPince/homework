#include<stdio.h>
int main(void)
{
	double a,b,c,d,e,h,j;
	a=1.0;
	b=2.0;
	c=a>=b;
	d=a>0&&!b!=0;
	e=a>0,b>0;
	h=a*=b;
	j=sizeof(a);
	printf("c=%lf d=%lf e=%lf h=%lf j=%lf\n",c,d,e,h,j);
	return 0; 
}
