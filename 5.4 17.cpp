#include<stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{1,2,3}};
	int b[3][2]={{1,2},{1,2},{1,2}};
	int v[2][2]={};
	int i,j,m;
	for(i=0;i<2;i++)
		for(m=0;m<2;m++)
		{
			int sum=0;
			for(j=0;j<3;j++)
				sum+=a[i][j]*b[j][m];
			v[i][m]=sum;
		}
	for(i=0;i<2;i++)
		for(m=0;m<2;m++)
			printf("%d\n",v[i][m]);
	return 0;	
	
 } 
