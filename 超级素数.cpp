#include<stdio.h>
int main()
{
	int a,b,m,n,e,f;
	int sum=0,squ=0;
	printf("请输入100~999");
	scanf("%d",&a);
	f=a;
	while(a>0)
	{
		b=a%10;
		sum+=b;
		squ+=b*b;
		a=(a-b)/10;	
	
		for(m=2;m<sum;m++)
		{
			if(sum%m==0)
			break;
		}

		for(n=2;n<squ;n++)
		{
			if(squ%n==0)
			break;
		}
		for(e=2;e<f;e++)
		{
			if(f%e==0)
			break;
		}
	}
	if(m==sum&&n==squ&&e==f)
	printf("%d是超级素数");
	else
	printf("%d不是超级素数",f); 
	return 0;

	
 } 
