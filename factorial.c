#include<stdio.h>
int main()
{
	int i,no,fact=1;
	printf("Enter choice : ");
	scanf("%d",&no);
	
	for(i = 1; i <= no; i++)
	{
		fact=fact*i;
	}
	printf("Factorial is : %d",fact);
	return 0;
}
