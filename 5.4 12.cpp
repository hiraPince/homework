#include<stdio.h>
int main()
{
	int a[5][6];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<6;j++)
			printf("%d\n",a[i][j]);
	return 0;
}
