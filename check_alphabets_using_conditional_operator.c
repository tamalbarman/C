#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a charecter: ");
	scanf("%c",&ch);
	
	(ch>='a' && ch<='z') || (ch>='A' && ch>='Z') 
	? printf("%c is a alphabet",ch) 
	: printf("%c is not a alphabet",ch);
	
	return 0;
}
