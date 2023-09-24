#include<stdio.h>
int main()
{
	float fahrenheit,celcious;
	
	printf("Enter temp to fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celcious = (fahrenheit - 32) * 5/9;
	
	printf("after converting: %f",celcious);
	
	return 0;
}
