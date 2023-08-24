#include<stdio.h>
int main()
{
	char name[50];
	int i,length=0;
	printf("Enter the string and get the length of that string = ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	printf("Entered string length is = %d",length);
	return 0;
}
