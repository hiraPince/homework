#include<stdio.h>
int main()
{
	int n,i;
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b,c,a,j,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d %d %d",&a,&b,&c);
		if(b>2&&(a%4==0&&a%100!=0)||a%400==0)
			d=1;
		else 
			d=0;	
		for(j=0;j<b-1;j++)
			d+=x[j];
			d=d+c;
		 printf("%d\n",d);
	}

		return 0;
 } 
