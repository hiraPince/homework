#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double a[999],b[999],c[999];
	char m[100][999];
	for(i=0;i<n;i++)
	{
		scanf("%s %lf %lf %lf",m[i],&a[i],&b[i],&c[i]);
	}
	double e[999],f[999];
	for(i=0;i<n;i++)
	{
		e[i]=a[i]+b[i]+c[i];
		f[i]=e[i]/3;
	}
	double max=e[0];
	for(i=0;i<n;i++)
	{
		if(e[i]>=max)
			max=e[i];
	}
	for(i=0;i<n;i++)
		printf("%.2f\n",f[i]);
	for(i=0;i<n;i++)
	{
		if(e[i]==max)
			printf("%s %.2f\n",m[i],f[i]);
	}
	return 0;
}
