#include<stdio.h>
int main()
{
	int a=113,b;
	int sum=0,squ=0;
	while(a>0)
	{
		b=a%10;
		sum+=b;
		squ+=b*b;
		a=(a-b)/10;	
	}
	printf("%d,%d",sum,squ);
	return 0;
	
 } 
