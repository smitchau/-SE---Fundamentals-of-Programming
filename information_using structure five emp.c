#include<stdio.h>
struct employee{
	int empno;
	char empname[50];
	char address[50];
	int age;
};
int main()
{
	struct employee e1[100];
	int n,i;
	printf("enter how many employee details you went to enter?=");
	scanf("%d",&n);
	printf("enter employee number,employee name,addressand age for %d employee\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter value for %d employee\n",i+1);
		printf("Enter employee number = ");
		scanf("%d",&e1[i].empno);
		printf("Enter employee name = ");
		scanf("%s",&e1[i].empname);
		printf("Enter employee address = ");
		scanf("%s",&e1[i].address);
		printf("Enter employee age = ");
		scanf("%d",&e1[i].age);
	}
	printf("\n-----employee details------\n");
	for(i=0;i<n;i++)
	{
		printf("\nemployee number = %d",e1[i].empno);
		printf("\nemployee name = %s",e1[i].empname);
		printf("\nemployee address = %s",e1[i].address);
		printf("\nemployee age = %d",e1[i].age);
	}
	return 0;
}

