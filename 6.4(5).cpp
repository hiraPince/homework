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
		"��",
		"123456789123456789",
		5000,
		"�Ĵ���ѧ����У��",
	}; 
	printf("ѧ�ţ�%d\n",employee.num);
	printf("����:%s\n",employee.name);
	printf("�Ա�:%s\n",employee.sex);
	printf("���֤��:%s\n",employee.ID);
	printf("����:%d\n",employee.salary);
	printf("��ַ:%s\n",employee.adress);
	return 0;
	
}
