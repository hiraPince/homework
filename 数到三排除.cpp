#include<stdio.h>
int main()
{
	int i,n,m,q,p,j;
	p=0;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			q=m;
			int a[m];
			for(j=0;j<m;j++) a[j]=j+1; 
			for(j=0;;j++) 
 				{ 
					if(j==m)
					j=0; 
 					if(a[j]!=0)
					p++;
						 else continue; 
 					if(p%3==0)
 				 	{
					  a[j]=0;
					  q--;
					} 
 					if(q==1)
					break; 
 				} 	
			for(j=0;j<m;j++) 
			if(a[j]!=0) 
			printf("%d",a[j]); 
		}
		return 0;
}
