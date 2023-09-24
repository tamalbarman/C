#include <stdio.h>
int main ()
{
	float radius,area,circle;
	
	printf("Enter the radious: ");
	scanf("%f",&radius);
	
	area= 3.141 * radius * radius;
	
	printf("area of a circle is: %f",area);
	
	return 0;
}
