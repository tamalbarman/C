#include<stdio.h>
int main()
{
	int day;
	
	printf("Enter days numbeer between (1-7): ");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("Monday",day);
	}
	else if(day==2)
	{
		printf("Tuesday",day);
	}
	else if(day==3)
	{
		printf("Wednesday",day);
	}
	else if(day==4)
	{
		printf("Thrusday",day);
	}
	else if(day==5)
	{
		printf("Friday",day);
	}
	else if(day==6)
	{
		printf("Satarday",day);
	}
	else if(day==7)
	{
		printf("Sunday",day);
	}
	else
	{
		printf("Please chose number (1-7)");
	}
	return 0;
}
