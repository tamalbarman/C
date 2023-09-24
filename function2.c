#include<stdio.h>
void main()
{
    int a;
    printf("We calculate Sum of Didigt\n");
    printf("Enter a Number ");
    scanf("%d",&a);
    sum(a);
}
void sum (int x)
{
    int b=0,c;
    while(x>0)
    {
        c=x%10;
        b=b+c;
        x=x/10;
    }
    printf("Sum of digit is: %d",b);
}