#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m,i,j;
	int flag=0;
	if(n>=1&&n<=1000)
	{	 
		for(i=0;i<n;i++)
		{	
			for(j=0;j<n;j++)
			 {
			 	for(m=0;m<3*n;m++) 
				{
					if(n==5*i+3*j+m/3&&m%3==0&&m+i+j==100)
					 {
						printf("%d %d %d\n",i,j,m);
			 			flag++;
			 	     }
				}
			 }
		}
		
	} 
	else
	printf("NO");
	if(flag==0)
	printf("NO");
	return 0;
			 
}
