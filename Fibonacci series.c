#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,no;

	printf("Enter last list no : ");
	scanf("%d",&no);
	printf("%d\t",n1);
	printf("%d\t",n2);
	printf("%d\t",n3);
	for(i=0;i<=no-4;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\t",n3);
	}
	
	return 0;
}
