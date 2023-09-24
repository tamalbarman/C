#include<stdio.h>
int main()
{
    int mat[3][3],i,j,s=0;
    printf("Emter the elements of 3*3 matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
            s=s+mat[i][j];
        }
    }
    printf("Sum of all elements is: %d",s);
    return 0;

}