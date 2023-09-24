#include <stdio.h>
int main()
{
	char x;
	printf("Enter a charecter: ");
	scanf ("%c",&x);
	
	if( (x >='a' && x<='z') || (x>='A' && x<='Z') )
	{
		printf ("%c ia an alphabet",x);
	}
	else
	{
		printf("%c is not an alphabet",x);
	}
	return 0;
}
