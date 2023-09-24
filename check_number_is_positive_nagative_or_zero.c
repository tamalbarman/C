#include<stdio.h>
int main()
{
	int num1;
	printf("Enter a number: ");
	scanf("%d",&num1);
	
	if(num1 > 0)
	{
		printf("positive number");
	}
	else if(num1 < 0)
	{
		printf("Nagative number");
	}
	else
	{
		printf("You Enter Zero");
	}
	return 0;
}
