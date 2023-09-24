#include<stdio.h>
 void main()
 {
        int n;
        printf("Enter the number:- ");
        scanf("%d",&n);
        palindrome(n);
       
}
void palindrome(int x)
{
        int temp,r,sum=0;
        temp=x;
        while (x > 0) {
            r = x % 10;
            sum = (sum*10) + r;
            x = (x / 10);
        }
        if (temp == sum)
            printf("The given number is palindrome");
        else
            printf("The given number is not palindrome");

}