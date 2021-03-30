#include<stdio.h>
int main()
{
	int m,n,k;
	scanf("%d %d %d",&m,&n,&k);
	if(k<=n)
	{
		int a,b=1,i;
		a=n-k+1;
		for(i=0;i<m;i++)
		{
			if(n-i>a)
				b*=(n-i);
			else 
			b*=a;
		}
		printf("%d",b);
	}
	else
		printf("Input Error");
	return 0;
 } 
