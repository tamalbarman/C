#include<stdio.h>
void main()
{
    int a=3,b=4,c=0;
    char user;
      c=((1/a)+(1/b)/(1/a)-(1/b));
    printf("If a:b = 3:1, then find (1/a+1/b)/(1/a-1/b)");
    printf("\n\n (a)2     (b) 5\n (c)7     (d)10\n");
    printf("Enter the right option");
    scanf("%c",&user);


    switch(user)
    {
        case 'a':
        printf("Incorrect");
        break;
        case 'b':
        printf("Incorrect");
        break;
        case 'c':
        printf("Correct ans: %d",c);
        case 'd':
        printf("Incorrect");
        break;
        default:
        printf("You not enter the correcr option");
        break;
    }
}