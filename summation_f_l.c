#include<stdio.h>
int main()
{
	int no,sum=0,f,l;
	
	printf("Enter number : ");
	scanf("%d",&no);          
	l=no%10;            
	while(no>=10)          
	{
		no=no/10;          
	}
	f=no;
	sum=f+l;
	printf("\nsum of digit :%d",sum);
	
	return 0;
}
