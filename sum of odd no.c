//sum of odd numbers are there
#include <stdio.h>
int main() 
{
  	int no,i,sum=0;
  	printf("Eneter ten no :\n");
  	for (i=0;i<10;i++)
  	{
    	scanf("\n%d",&no);
    	if(no%2!=0)
    	{
    		sum=sum+no;
		}
  	}
  	printf("\nsum of odd no is : %d",sum);
  	return 0;
}
