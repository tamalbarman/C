#include<stdio.h>
void fibonacciSeries(int value)
{
   int a=0,b=1,c;
   while (a<=value)
   {
     printf("%d\t",a);
     c=a+b;
     a=b;
     b=c;
   }
}
int main()
{
   int value;
   printf("We Dsiplay Fibonacci Series...\n");
   printf("Enter Value: ");
   scanf("%d",&value);
   printf("The fibonacci series is:\n");
   fibonacciSeries(value);
   return 0;
}