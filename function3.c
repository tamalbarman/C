#include<stdio.h>
int checkprime(int);
void main()
{
   int n, result;
   printf("We check whether a number is prime or not....\n");
   printf("Enter an integer: ");
   scanf("%d",&n);
   result = checkprime(n);
   if ( result == 1 )
   {
      printf("%d is prime.\n", n);
   }   
   else
   {
      printf("%d is not prime.\n", n);
   }
   return 0;
}
int checkprime(int a)
{
   int c;
 
   for (c=2;c<=a-1;c++)
   { 
      if (a%c==0)
      return 0;
   }
   return 1;
}
 