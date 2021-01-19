#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h;
    a=1;
	b=2;
	c=a>0&&!b!=0;
	d=a>0,b>0;
	e=a>>b%32;
	f=a&b;
	g=a*=b;
	h=sizeof(a);
	printf("c=%d d=%d e=%d f=%d g=%d h=%d\n",c,d,e,f,g,h);
	
	return 0;
}
