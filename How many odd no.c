//How many Even numbers are there
#include <stdio.h>
int main() 
{
  	int no,i,count=0;
  	printf("Eneter ten no :\n");
  	for (i=0;i<10;i++)
  	{
    	scanf("\n%d",&no);
		if(no%2!=0)
		{
			count++;	
		}	
  	}
  	printf("\nthe total odd no : %d",count);
  	return 0;
}
