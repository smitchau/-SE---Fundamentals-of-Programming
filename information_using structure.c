#include<stdio.h>
struct employee{
	int empno;
	char empname[50];
	char address[50];
	int age;
};
int main()
{
	struct employee e1;
	printf("Enter employee number = ");
	scanf("%d",&e1.empno);
	printf("Enter employee name = ");
	scanf("%s",&e1.empname);
	printf("Enter employee address = ");
	scanf("%s",&e1.address);
	printf("Enter employee age = ");
	scanf("%d",&e1.age);
	
	printf("\n-------Employee details-------");
	printf("\nemployee number = %d",e1.empno);
	printf("\nemployee name = %s",e1.empname);
	printf("\nemployee address = %s",e1.address);
	printf("\nemployee age = %d",e1.age);
	
	return 0;
}

