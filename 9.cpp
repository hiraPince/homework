#include<stdio.h>
int main(void)
{
	double x,y,m,n,j,k;
	printf("Please input two numbers");
	scanf("%d %d",&x,&y);
	m=x+y;
	n=x*y;
	j=x-y;
	k=x/y;
	printf("m=%lf n=%lf j=%lf k=%lf\n",m,n,j,k);
	
	return 0;
}
