#include<stdio.h>
struct DateType
{
	int year;
	int month;
	int day;	
};
int main()
{
	struct DateType date;
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,m=0;
	scanf("%d %d %d",&date.year,&date.month,&date.day);
	if(date.year%4!=0||(date.year%100==0&&date.year%400!=0)&&date.month>2)
		date.day=date.day+1;
	for(i=0;i<date.month-1;i++)
		m+=x[i];
	m=m+date.day;
	printf("%d",m);
	return 0;
	
	
}
