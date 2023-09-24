#include<stdio.h>
void main()
{
    int number;
    printf("We calculate factorial of number\n");
    printf("Enter the Number: ");
    scanf("%d",&number);
    factorial (number);
}
void factorial (int x)
{
    int i, fact=1;
    for(i=1;i<x;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d id: %d",x,fact*1);
}