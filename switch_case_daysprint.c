#include<stdio.h>
int main()
{
	int days;
	printf("Enter your choice number : ");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thusday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saterday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
			printf("Enter your valid number");
	}
	return 0;
}
