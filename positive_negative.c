#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is a possitive number",a);
	}
	else if(a<0) // remember error </>
	{
		printf("%d is a negative number",a);
	}
	else
	{
		printf ("You enter 0",a);
	}
}

