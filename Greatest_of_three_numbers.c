#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three number \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
    printf("Greatest number is %d",a);
}
else if(b>a && b>c)
{
printf("Greatest of three number is %d",b);
}
else
{
    printf("Greatest of three number is %d",c);
}
    return 0;
}