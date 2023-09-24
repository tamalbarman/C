#include<stdio.h> //output wrong
int main()
{
    int a[15],n,c,p=0;
    int x,i;
    printf("Enter array size[1-15]: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    scanf("%d",&a[x]);
    for(i=0;i<x;i++)
    {
        printf("Enter element to search: ");
        scanf("%d",&c);
    }
    for(i=0;i<x;i++)
    {
        if(a[x]==c)
        {
        printf("%d found postion %d",c,i+1);
        }
    }
    printf("%d not found",c);
    return 0;
}