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
	printf("ѧ��:\n");
	scanf("%d",&employee.num);
	printf("����:\n");
	scanf("%s",employee.name);
	printf("�Ա�:\n");
	scanf("%s",employee.sex);
	printf("���֤��:\n");
	scanf("%s",employee.ID);
	printf("����:\n");
	scanf("%d",&employee.salary);
	printf("��ַ:\n");
	scanf("%s",employee.adress);
	printf("ѧ�ţ�%d\n",employee.num);
	printf("����:%s\n",employee.name);
	printf("�Ա�:%s\n",employee.sex);
	printf("���֤��:%s\n",employee.ID);
	printf("����:%d\n",employee.salary);
	printf("��ַ:%s\n",employee.adress);
	return 0;
	
}
