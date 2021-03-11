
#include<stdio.h>
int Sum(int n,int k)
{
	if(n>1)
		return k+Sum(n-1,k);
	else
		return 0;
}
int main()
{
	int a,n,k;
	scanf("%d %d %d",&n,&a,&k);
	if(a>0&&k<=100&&n>=2&&0<k)
		printf("%d",Sum(n,k)+a);
	else
		printf("Wrong Number");
	return 0;
	
 } 
