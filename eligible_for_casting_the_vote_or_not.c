#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age < 18)
	{
		printf("You are not eligable for casting the vote \n");
		printf("You are eligable for casting the vote afte %d years",18-age); // new technique
	}
	else
	{
		printf("You are not eligable for casting the vote");
	}
	
	return 0;
}
