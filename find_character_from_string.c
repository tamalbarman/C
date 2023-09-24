#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],c;
    int x,len,f=0;
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    printf("Enter the character to find its possition: ");
    scanf("%c",&c);
    for(x=0;x<len;x++)
    {
        if(str[x]==c)
        {
            printf("Character position: %d",x+1);
            f=1;
        }
    }
    if(f==0)
    {
        printf("Character not found");
    }
}