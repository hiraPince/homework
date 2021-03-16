#include<stdio.h>
struct  Employee
{
	int num;
	char name[99];
	char sex[99];
	char ID[99];
	int salary;
	char adress[99];
};
int main()
{
	struct Employee employee;
	printf("学号:\n");
	scanf("%d",&employee.num);
	printf("姓名:\n");
	scanf("%s",employee.name);
	printf("性别:\n");
	scanf("%s",employee.sex);
	printf("身份证号:\n");
	scanf("%s",employee.ID);
	printf("工资:\n");
	scanf("%d",&employee.salary);
	printf("地址:\n");
	scanf("%s",employee.adress);
	printf("学号：%d\n",employee.num);
	printf("姓名:%s\n",employee.name);
	printf("性别:%s\n",employee.sex);
	printf("身份证号:%s\n",employee.ID);
	printf("工资:%d\n",employee.salary);
	printf("地址:%s\n",employee.adress);
	return 0;
	
}
