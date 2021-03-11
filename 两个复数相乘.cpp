#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)	
	{	
		scanf("%d %d %d %d",&a,&b,&c,&d);
		e=a*c-b*d;
		f=a*d+b*c;
		printf("%d %d",e,f);
	}
	return 0;
}
