#include<stdio.h>
int main()
{
	int no;
	printf("Enter no : ");
	scanf("%d",&no);
    (no%2==0) ? printf("even") : printf("odd");
	return 0;
}
