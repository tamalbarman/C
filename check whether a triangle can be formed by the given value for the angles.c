#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	
	printf("Enter three angles value: ");
	scanf("%d %d %d",&angle1,&angle2,&angle3);
	
	sum = angle1+angle2+angle3;
	
	if(sum == 180)
	{
		printf("Its a Traiangle");
	}
	else
	{
		printf("Not a Traingle");
	}
	
	return 0;
}
