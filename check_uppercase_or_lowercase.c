#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='B')
	{
		printf("%c is Uppercase",ch);
	}
	else if (ch>='a' && ch<='z')
	{
		printf("%c is Lowercase",ch);
	}
	else
	{
		printf("%c not an alphabet");
	}
	
	return 0;
}
