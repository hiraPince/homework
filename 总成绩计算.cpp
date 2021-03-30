#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[21];
    int sno;
    double chinese;
    double english;
    double math;
    double sum;

}student;
int main()
{
	student stu[99];
	student stud[99];
	int i,n,p,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %lf %lf %lf",stu[i].name,&stu[i].sno,&stu[i].chinese,&stu[i].english,&stu[i].math);
		stu[i].sum=stu[i].chinese+stu[i].english+stu[i].math;
	}
	for(i=0;i<n;i++)
		stud[i]=stu[i];
	double k;
	k=stu[0].sum;
	double a[n];
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(stu[i].sum>k)
				k=stu[i].sum;
			if(stu[i].sum=k)
			{
				for(p=0;p<n;p++)
					if(stu[p].sum==k)
			 	  		if(strcmp(stu[p].name,stu[i].name)>0)
			 	  		{
			 	  			k=stu[p].sum;
						 }
			}
		}
		a[j]=k;
		for(i=0;i<n;i++)
			if(stu[i].sum==k)
			   stu[i].sum=0;
		k=0;
	}
	for(j=0;j<n;j++)
	{
		printf("[name:%s,sum:%lg,sno:%d]\n",stud[i].name,stud[i].sum,stud[i].sno);
	}
	return 0;
 } 
