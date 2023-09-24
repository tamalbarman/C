#include<stdio.h>
int findpeak(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
        {
            return i;
        }
    }
}
int main()
{
    int arr[5]={5,10,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",findpeak(arr,n));
}
