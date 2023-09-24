#include<stdio.h>
int main()
{
	float celsious,fahrenheit;
	
	printf("Enter temp in celcious: ");
	scanf("%f",&celsious);
	
	fahrenheit = (celsious * 9/5) + 32;
	
	printf("after celsious to fahrenheit:%f",fahrenheit);

	return 0;
}
