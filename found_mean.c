#include<stdio.h>
int main()
{
    int arr[10],i,k,m=0,j=0;
    printf("Enter the size of array: ");
    scanf("%d",&k);
    printf("Enter the Elementes of the array:\n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
    {
        m = m + arr[i];
    }
    printf("Sum of all number is: %d\n",m);
    printf("But we need to find mean of %d",m);
    j=m/10;
    printf("\nThe mean of %d is: %d",m,j);
    return 0;
}