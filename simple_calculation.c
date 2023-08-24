#include<stdio.h>
int main()
{
	float add,sub,mul,div,n1,n2;
	int choice,modulo,no1,no2;
	printf("choice 1 : addition\n");
	printf("choice 2 : subtraction\n");
	printf("choice 3 : multiplication\n");
	printf("choice 4 : divition\n");
	printf("choice 5 : modulo\n");
	printf("________________________\n");
	
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter number 1 :");
		scanf("%f",&n1);
		printf("Enter number 2 :");
		scanf("%f",&n2);
		add=n1+n2;
		printf("addition %f",add);
	}
	else if(choice==2)
	{
		printf("Enter number 1 :");
		scanf("%f",&n1);
		printf("Enter number 2 :");
		scanf("%f",&n2);
		sub=n1-n2;
		printf("subtraction %f",sub);
	}
	else if(choice==3)
	{
		printf("Enter number 1 :");
		scanf("%f",&n1);
		printf("Enter number 2 :");
		scanf("%f",&n2);
		mul=n1*n2;
		printf("multiplication %f",mul);
	}	
	else if(choice==4)
	{
		printf("Enter number 1 :");
		scanf("%f",&n1);
		printf("Enter number 2 :");
		scanf("%f",&n2);
		div=n1/n2;
		printf("divition %f",div);
	}
	else if(choice==5)
	{
		printf("Enter number 1 :");
		scanf("%d",&no1);
		printf("Enter number 2 :");
		scanf("%d",&no2);
		modulo=no1%no2;
		printf("modulo %d",modulo);
	}
	else{
		printf("...Enter your velid choice...");
	}
	return 0;
}
