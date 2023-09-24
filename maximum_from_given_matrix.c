#include <stdio.h>
int main()
{
  int i, j, k, d, mat[100][100], maximum;

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d",&k,&d);

  printf("Enter the elements of the matrix: ");

  for (i = 0; i < k; i++)
  {
    for(j = 0; j < d; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
  maximum = mat[0][0];

  for (i = 0; i < k; i++)
  {
    for (j = 0; j < d; j++)
    {
      if (mat[i][j] > maximum)
      {
        maximum = mat[i][j];
      }
    }
  }

  printf("Maximum element in the matrix is %d", maximum);

  return 0;
}