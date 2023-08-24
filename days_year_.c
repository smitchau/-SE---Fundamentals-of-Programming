#include<stdio.h>

int main()
{
	int number_of_days , days , year , month , choice;
	
	printf("\nchoice 1 : convert days to year,month,days");
	printf("\nchoice 2 : convert year to days");
	printf("\n___________________________________________");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter number of days : ");
			scanf("%d",&number_of_days);
			
			year = number_of_days / 365 ;
			month = (number_of_days - year * 365)/ 30;
			days = number_of_days - year * 365 - month * 30;
			
			printf("\nyear : %d",year);
			printf("\nmonth : %d",month);
			printf("\ndays : %d",days);
			
			break;
			
		case 2:
			printf("\nEnter number of year : ");
			scanf("%d",&year);
			
			days = year * 365 ;
			
			printf("\ndays : %d",days);
	}
	
	return 0;
}
