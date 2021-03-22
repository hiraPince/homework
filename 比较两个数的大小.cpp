#include<stdio.h>
int nocmp (int *ptr1, int *ptr2)
{
	if(*ptr1<*ptr2)
		return *ptr2;
	return *ptr1;
}
int main()
{
	int a[10]={};
	int b[10]={};
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	int max1,max2;
	max1=a[0];
	max2=b[0];
	for(i=0;i<10;i++)
		if(max1<a[i])
			max1=a[i];
	for(i=0;i<10;i++)
		if(max2<b[i])
		
			max2=b[i];
	int p=nocmp(&max1,&max2);
	printf("%d",p);
	return 0;
}
