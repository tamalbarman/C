#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter three number: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=c && a>=c)
	{
		printf("%d is a largest number",a);
	}
	else if(b>=c && b>=a)
	{
		printf("%d is a largest number",b);
	}
	else if(c>=a && c>=a)
	{
		printf("%d is a largest number",c);
	}
	else
	{
		printf("you entered wrong");
	}
	return 0;
}
