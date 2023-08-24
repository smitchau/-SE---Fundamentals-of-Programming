#include<stdio.h>
int main()
{
	
	float radius,width,height,pi = 3.14,ans;
	int choice;
	printf("\nchoice 1 :circle");
	printf("\nchoice 2 :rectangle");
	printf("\nchoice 3 :triangle");
	printf("\n_____________________________");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter radius : ");
		scanf("%f",&radius);
		ans=pi*radius*radius;
		printf("circle area: %f",ans);
	}
	else if(choice==2)
	{
		printf("Enter height : ");
		scanf("%f",&height);
		printf("Enter width : ");
		scanf("%f",&width);
		ans=height*width;
		printf("rectangle area: %f",ans);
	}
	else if(choice==3)
	{
		printf("Enter height : ");
		scanf("%f",&height);
		printf("Enter width : ");
		scanf("%f",&width);
		ans=height*width/2;
		printf("triangle area: %f",ans);
	}
	else{
		printf("Enter valid choice");
	}

}
