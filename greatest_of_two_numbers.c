#include<stdio.h>
int main()
{
    int a,b;
printf("Enter two number ");
scanf("%d%d",&a,&b);
if(a>b)
{
    printf("Greatest number is %d",a);
}
else if(a<b)
{
    printf ("Greatest number is %d",b);
}
else
{
    printf("%d %d boats are greatest number",a,b);
}

    return 0;
}