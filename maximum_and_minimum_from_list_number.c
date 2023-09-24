#include<stdio.h> //getting error
int main()
{
    int a[6],i;
    printf("Enter the element of array:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<6;)
    {
        if(a[0]<a[i])
        {
            i++;
            continue;
        }
        else
        {
            a[0]=a[i];
            i++;
            continue;
        }
        printf("The minumum number is %d",a[0]);
        for(i=1;i<6;)
        {
            if(a[0]>a[i])
            {
                i++;
                continue;
            }
            else
            {
                a[0]=a[i];
                i++;
                continue;
            }
        }
        printf("The maximum number is %d\n",a[0]);
    }
    return 0;
}