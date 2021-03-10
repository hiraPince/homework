#include<stdio.h>
int main()
{
	int m,n;
	printf("please input a number");
	scanf("%d",&n);
	for(m=2;m<n;m++)
	{
		if(n%m==0)
		break;
	}
	if(m==n)
	printf("n is Prime",n);
	else
	printf("n is not Prime",n);	
	return 0;
}
