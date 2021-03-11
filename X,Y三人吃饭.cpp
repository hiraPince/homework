#include<stdio.h>
int main()
{   int a,b,c,x,y,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
	scanf("%d %d",&x,&y);
	for(a=0;a<=((x+y)/4);a++)
	{
		b=(y-x-2*a);
		c=(2*x-y+a);
		if(b>=0&&c>=0){
	    printf("%d %d %d\n",a,b,c);
		}
	}
}
	return 0;
}

