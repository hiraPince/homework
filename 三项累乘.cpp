#include<stdio.h>
int main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m=0;
		scanf("%d",&a);
		if(a>3&&a<50)
		{
			for(b=2;b<=a;b++) 
			{	
				m+=(b-1)*b*(b+1);
			}
		printf("%d\n",m);
		} 
	}
	
	return 0;
			
 } 
