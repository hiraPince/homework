#include<stdio.h>
int main()
{
	int n,i,q;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int m,k;
		scanf("%d %d",&m,&k);
		int p=m+1;
		int t=0;
		for(int m=1;m<=9999;m++)
		{
			q=p;
			int b=0;
			while(p)
			{
				b=b*10+p%10;
				p=p/10;		
			}
			if(b==q)
			{		
				printf("%d ",q);
				t++;
			}
			if(t==k)
				break;
			p=q+1;
		}
		printf("\n");
	}
	return 0;
 } 
