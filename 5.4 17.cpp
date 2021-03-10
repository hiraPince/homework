#include<stdio.h>
int main()
{
	int a[4][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	int b[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int v[4][4]={};
	int i,j,m;
	for(i=0;i<4;i++)
		for(m=0;m<4;m++)
		{
			int sum=0;
			for(j=0;j<3;j++)
				sum+=a[i][j]*b[j][m];
			v[i][m]=sum;
		}
	for(i=0;i<4;i++)
		for(m=0;m<4;m++)
			printf("%d\n",v[i][m]);
	return 0;	
	
 } 
