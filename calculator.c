#include<stdio.h>
int main()
{
	int n1,n2,sum,mul,div,sub,modulo,choice;
	printf("case 1 : addition");
	printf("\ncase 2 : Subtraction");
	printf("\ncase 3 : multiplication");
	printf("\ncase 4 : divison");
	printf("\ncase 5 : modulo");
	printf("\n__________________________");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter number 1 : ");
			scanf("%d",&n1);
			printf("Enter number 2 : ");
			scanf("%d",&n2);
			printf("\n");
			sum=n1+n2;
			printf("%d and %d sum is = %d",n1,n2,sum);
			break;
			
		case 2:
			printf("Enter number 1 : ");
			scanf("%d",&n1);
			printf("Enter number 2 : ");
			scanf("%d",&n2);
			printf("\n");
			sub=n1-n2;
			printf("%d and %d Subtraction is = %d",n1,n2,sub);
			break;
			
		case 3:
			printf("Enter number 1 : ");
			scanf("%d",&n1);
			printf("Enter number 2 : ");
			scanf("%d",&n2);
			printf("\n");
			mul=n1*n2;
			printf("%d and %d multiplication is = %d",n1,n2,mul);
			break;
			
		case 4:
			printf("Enter number 1 : ");
			scanf("%d",&n1);
			printf("Enter number 2 : ");
			scanf("%d",&n2);
			printf("\n");
			div=n1/n2;
			printf("%d and %d division is = %d",n1,n2,div);
			break;
			
		case 5:
			printf("Enter number 1 : ");
			scanf("%d",&n1);
			printf("Enter number 2 : ");
			scanf("%d",&n2);
			printf("\n");
			modulo=n1%n2;
			printf("%d and %d modulo is = %d",n1,n2,modulo);
			break;
	}
	return 0;
}
