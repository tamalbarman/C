#include<stdio.h>
int main()
{
	double feet,meater;
	printf("Enter feet: ");
	scanf("%lf",&feet);
	
	meater=feet/3.281;
	
	printf("after convert feet to meater: %lf",meater);
	
	return 0;
}
