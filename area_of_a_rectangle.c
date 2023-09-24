#include<stdio.h>
int main()
{
	float leangth,width,area;
	
	printf("Enter the leangth of a rectangle: ");
	scanf("%f",&leangth);
	
	printf("Enter the width if a rectangle: ");
	scanf("%f",&width);
	
	area=leangth * width;
	
	printf("area of a rectangle is %f",area);
	
	return 0;
}
