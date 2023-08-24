#include<stdio.h>
int fact(int a);
int main()
{
	int no;
	printf("Enter no :");
	scanf("%d",&no);
	int result=fact(no);
	printf("\nfactorial is : %d",result);
	return 0;
}
int fact(int a)
{
	if(a>0)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}

