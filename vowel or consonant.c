#include<stdio.h>
int main()
{
	char value;
	printf("Enter the value: ");
	scanf("%c",&value);
	if(value == 'a' || value == 'e' || value == 'i' || 
	value == 'o' || value == 'u' || value == 'A' ||
	value == 'E' || value == 'I' || value == 'O' || 
	value == 'U')
	{
		printf("value is vowel");
	}
	else{
		printf("value is consonant");
	}
	return 0;
}
