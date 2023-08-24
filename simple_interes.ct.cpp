#include<stdio.h>
int main()
{
	int p,n;
	float r,interest;
	printf("principle amount (p):");
	scanf("%d",&p);
	printf("enter rate of interest:");
	scanf("%f",&r);
	printf("enter time (n):");
	scanf("%d",&n);
	interest=p*r*n/100;
	printf("simple interest: %f",interest);
	return 0;
}
