#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],name1[50];
	printf("Enter string = ");
	scanf("%s",&name);
	strcpy(name1,name);
	strrev(name1);
	printf("After reverce entered string = %s",name1);
	if(strcmp(name,name1) == 0)
	{
		printf("\n::Entered string is  palindrome::");
	}
	else{
		printf("\n::Entered string is not palindrome::");
	}
	return 0;	
}

