#include<stdio.h>
int main()
{
	int D,VUL;
	scanf("%d",&VUL);
	scanf("%d",&D);
	while(VUL!=0&&D!=0)
	{
		int m,n,i,p;
		for(i=1;;i++)
		{
			if(((D*i*(i-1))/2<VUL)&&((D*i*(i+1)/2>=VUL)))
			{
				n=i;
				break;
			}
		}
		int b=n+(n*(n-1)/2)-1;
		for(p=1;;p++)
		{
			if(D*(n*(n-1)/2+p)>=VUL)
				{
					m=p;
					break;
				}
		}
		b+=m;
		printf("%d\n",b);
		scanf("%d",&VUL);
		scanf("%d",&D);
	}
	return 0;
}
