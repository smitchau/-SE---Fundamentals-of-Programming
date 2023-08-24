#include<stdio.h>
#include<math.h>
int sum(int x,int y);
int main()
{
	int a,b,result;
	scanf("%d %d",&a,&b);
	result=sum(a,b);    //argument
	printf("sum is%d",result);
	return 0;
}
int sum(int x,int y)   // parameter
{
	return x+y;
}
