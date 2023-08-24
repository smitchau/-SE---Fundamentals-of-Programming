#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter value of number one:");
	scanf("%d",&no1);
	printf("enter value of number two:");
	scanf("%d",&no2);
	
	no1=no1+no2;
	no2=no1-no2;	
	no1=no1-no2;	
	
	
	printf("\nafter swaping:");
	printf("\nvalue of number one:%d",no1);
	printf("\nvalue of number two:%d",no2);
	return 0;
}
