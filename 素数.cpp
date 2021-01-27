#include<stdio.h>
int main()
{
	int m,n;
	printf("请输入n");
	scanf("%d",&n);
	for(m=2;m<n;m++)
	{
		if(n%m!=0)
		break;
	}
	if(m==n)
	printf("%d是素数",n);
	else
	printf("%d不是素数",n);	
	return 0;
}
