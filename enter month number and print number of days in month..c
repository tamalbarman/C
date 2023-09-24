#include <stdio.h>
int main()
{
	int month;
	
	printf("Enter month number: ");
	scanf("%d",&month);
	
	if(month == 1)
	{
		printf("Name of Month : Janauary\n Number of Days : 31days");
	}
	else if(month == 2)
	{
		printf("Name of Month : February\n Number of Days : 28-29days");
	}
	else if(month == 3)
	{
		printf("Name of Month : March\n Number of Days : 31days");
	}
	else if(month == 4)
	{
		printf("Name of Month : April\nNumber of Days : 30days");
	}
	else if(month == 5)
	{
		printf("Name of Month : May\nNumber of Days : 31days");
	}
	else if(month == 6)
	{
		printf("Name of Month : June\nNumber of Days : 30days");
	}
	else if(month == 7)
	{
		printf("Name of Month : July\nNumber of Days : 31days");
	}
	else if(month == 8)
	{
		printf("Name of Month : August\nNumber of Days : 31days");
	}
	else if(month == 9)
	{
		printf("Name of Month : Septembar\nNumber of Days : 30days");
	}
	else if(month == 10)
	{
		printf("Name of Month : Octobar\nNumber of Days : 31days");
	}
	else if(month == 11)
	{
		printf("Name of Month : Novembar\nNumber of Days : 30days");
	}
	else if(month == 12)
	{
		printf("Name of Month : Decembar\nNumber of Days : 31days");
	}
	else
	{
		printf("You enter wrong please enter between (1-12)");
	}
	
	return 0;
}
