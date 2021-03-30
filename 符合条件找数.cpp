#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((a<=100&&a>=1)&&(b<=100&&b>=1)&&(c<=100&&c>=1))
		{
			int x;
			for(x=0;x<=10000;x++)
			{
				if((x%a==0)&&((x+1)%b==0)&&((x+2)%c==0))
				{
					if(x>=1000&&x<=9999)
						printf("%d\n",x);
					break;
				}
				else if(x==10000)
					printf("Impossible\n");
			}
		}	

	}
	return 0;
 } 
