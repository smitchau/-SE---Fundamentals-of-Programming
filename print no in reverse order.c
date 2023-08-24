#include<stdio.h>
int main()
{
	int no,reverse=0,reminder;
	
	printf("Enter number : ");
	scanf("%d",&no);          
	
	while(no!=0){
		reminder=no%10;
		reverse=reverse*10+reminder;
		no/=10;
	}
	printf("reversed number = %d",reverse);
	
	return 0;
}
