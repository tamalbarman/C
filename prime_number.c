#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%n!=0)
        {
            printf("\n %d is a prime number",i);
        }
    }
}