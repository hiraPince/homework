#include<stdio.h>
int main()
{
	int a;
	for(a=2000;a<=8000;a++)
	{
		if(a%5==0)
		printf("a=%d\n",a);
	}
	return 0;
}
