#include<stdio.h>
int main()
{
	int x[10]={-1,-2,3,4,5,9,11,8,15,65};
	int y[10];
	unsigned int i=0;
	for(i=0;i<10;i++)
	{
		y[i]=x[9-i];
	}
	for(i=0;i<10;i++)
	printf("%d,",y[i]);
	return 0;
	
}
