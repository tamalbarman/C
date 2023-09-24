#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	
	year = (year%4==0 && year%100!=0) ? printf("%d is Leap Year",year) : (year%400==0)
	? printf("Leap year") : printf("%d is not leep year",year); // always remember error
	
	return 0;
}
