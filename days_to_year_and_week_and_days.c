#include<stdio.h>
int main()
{
	float days,time1,time2,week;
	
	printf("Enter days: ");
	scanf("%f",&days);
	
	printf("Enter week: ");
	scanf("%f",&week);
	
	time1=days/365;
	time2=week*7;
	
	printf("after converting days to year %f \n",time1);
	printf("after converting week to days %f",time2);
	
	return 0;
}
