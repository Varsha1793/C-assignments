#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int eno;
	char ename[30];
	char edept[50];
	int salary;
};	
int main()
{
	int n=2,i;
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your name:");
		scanf("%s",e[i].ename);
		printf("Enter your id number:");
		scanf("%d",&e[i].eno);
		printf("Enter your department:");
		scanf("%s",e[i].edept);
		printf("Enter your salary:");
		scanf("%d",&e[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("\nName:%s",e[i].ename);
		printf("\nID number:%d",&e[i].eno);
		printf("\nDepartment:%s",e[i].edept);
		printf("\nSalary:%d",&e[i].salary);
	}
}

