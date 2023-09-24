#include<stdio.h>
int main()
{
    int a,b=1;
    for(a=1;a<=5;a=a+1)
    {
        b=b*a;
    }
    printf("Factorial of 5 is: %d\n",b);
}
