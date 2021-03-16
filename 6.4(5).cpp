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
	struct Employee employee=
	{
		123456789,
		"zed",
		"男",
		"123456789123456789",
		5000,
		"四川大学江安校区",
	}; 
	printf("学号：%d\n",employee.num);
	printf("姓名:%s\n",employee.name);
	printf("性别:%s\n",employee.sex);
	printf("身份证号:%s\n",employee.ID);
	printf("工资:%d\n",employee.salary);
	printf("地址:%s\n",employee.adress);
	return 0;
	
}
