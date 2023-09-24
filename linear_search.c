#include<stdio.h>
int main()
{
    int a,b,c,arr[100];
    printf("Enter the Size of an array: ");
    scanf("%d",&a);
    printf("Enter the elements which you want to store in this array:\n");
    for(b=0;b<a;b++)
    {
        scanf("%d",&arr[b]);
    }
    printf("Enter the elements you want to search: ");
    scanf("%d",&c);
    for(b=0;b<a;b++)
    {
        if(arr[b]==c)
            break;
    }
    if(b<a)
    {
        printf("Elements found at index %d",b);
    }
    else
    {
        printf("Elements Not Found");
    }
    return 0;
}
