#include<stdio.h>
int main()
{
	int m,n;
	printf("������n");
	scanf("%d",&n);
	for(m=2;m<n;m++)
	{
		if(n%m!=0)
		break;
	}
	if(m==n)
	printf("%d������",n);
	else
	printf("%d��������",n);	
	return 0;
}
