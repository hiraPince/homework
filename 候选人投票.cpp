#include<stdio.h>
#include<string.h>
struct Candidate {
       char name[10];
       unsigned int count;
}; 
int main()
{
	struct Candidate s[4];
	int i,n;
	char m[999][999];
	s[0].count=0;
	s[1].count=0;
	s[2].count=0;
	s[3].count=0;
	scanf("%d",&n);
	if(n<4||n>100)
		printf("Input Error");
	else if(n>=3&&n<=100)	
		{
			for(i=0;i<n;i++)
		{
			scanf("%s",m[i]);
			if(strcmp(m[i],"ZS")==0)
				s[0].count++;
			if(strcmp(m[i],"LS")==0)
				s[1].count++;
			if(strcmp(m[i],"WW")==0)
				s[2].count++;
			if(strcmp(m[i],"ZS")!=0&&strcmp(m[i],"LS")!=0&&strcmp(m[i],"WW")!=0)
				s[3].count++;
		}
		printf("ZS:%d\nLS:%d\nWW:%d\nQQ:%d\n",s[0].count,s[1].count,s[2].count,s[3].count);
		}
	return 0;
}
 
