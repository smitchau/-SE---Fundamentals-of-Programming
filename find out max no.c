#include<stdio.h>
int main()
{
	int no,large=0,rem=0;
	printf("Enter the number : ");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		if(rem>large)
		{
			large=rem;
		}
		no=no/10;
	}
	printf("\n%d is largest digit in your enter number.",large);
	return 0;
}

