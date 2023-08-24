#include<stdio.h>
int main()
{
	int no,sum=0;
	
	printf("Enter number : ");
	scanf("%d",&no);          
	
	while(no>0){
		sum=sum+(no%10);
		no/=10;
	}
	printf("\nsum of digit :%d",sum);
	
	return 0;
}
