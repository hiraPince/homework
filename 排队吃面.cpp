#include<stdio.h>
int main()
{
	int i,n,l,k,y,a,b,c,e;
	int f=9999999999999999;
	scanf("%d %d %d %d",&n,&l,&k,&y);
	a=l+k+y;
	b=2*l+k;
	c=3*l+3*k+2*y;
	getchar();
	for(i=1;i<=n;i++)
	{
		char d;
		e=0;
		while((d=getchar())!='\n')
		{
			switch(d)
			{
				case 'A':
					e+=a;
					break;
				case 'B':
					e+=b;
					break;
				case 'C':
					e+=c;
					break;
			}
		}
		if(e<f)
			f=e;
					
	}
	printf("%d",f);
	return 0;
 } 
