#include<stdio.h>
struct  Employee
{
	int num;
	char* name;
	char* sex;
	char* ID;
	int salary;
	char* adress;
};
int main()
{ 
	int i,max,m,n;
	struct Employee employee[8]=
	{
		{0,0,0,0,5000,0},{0,0,0,0,6000,0},{0,0,0,0,7000,0},{0,0,0,0,8000,0}, 
		{0,0,0,0,9000,0},{0,0,0,0,4000,0},{0,0,0,0,3000,0},{0,0,0,0,2000,0},
	}; 
	max=employee[0].salary;
	for(i=0;i<8;i++)
	{
		m+=employee[i].salary;
		if(employee[i].salary>max)
			max=employee[i].salary;
		
	}
	n=m/8;
	printf("max=%d sum=%d average=%d",max,m,n);

	return 0;
	
}
