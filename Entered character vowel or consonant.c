#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
	|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("%c is an anvowel",ch);
	}
	else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) // always remeber erro || oparator
	{
		printf("%c is consonant",ch);
	}
	else
	{
		printf("%c not an alphabet",ch);
	}
	
	return 0;
}
