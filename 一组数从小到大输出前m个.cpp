#include<stdio.h>
int main()
{
	int j,m,n,i,p;
	scanf("%d %d",&n,&m);
	int a[9999],b[9999];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	b[0]=9999;
	for(j=1;j<n+1;j++)
	{	
		for(i=0;i<n;i++)
		{
			if(b[j]<a[i]&&a[i]<b[j-1])
			b[j]=a[i];
		}
	}
	for(i=1;i<m+1;i++)
		printf("%d ",b[i]);
	return 0;
 } 
