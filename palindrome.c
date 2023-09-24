#include<stdio.h>
int main()
{
    int x, rev=0,r,temp;
    printf("Enter the value of x:");
    scanf("%d",&x);
    temp=x;
    while(x!=0)
    {
        r=x%10;
        rev = rev*10+r;
        x/=10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}