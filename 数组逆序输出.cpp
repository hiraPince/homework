#include<stdio.h>
double* Sum(double *x,double *y,int n)
{
	int i;
	for(i=0;i<n;i++)
	y[i]=x[n-1-i];
	return y;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	double x[n];
	double y[n];
	for(i=0;i<n;i++)
		scanf("%lf",&x[i]);
	double* p=Sum(x,y,n);
	for(i=0;i<n;i++)
		printf("%1lg ",y[i]);
	return 0;
}
