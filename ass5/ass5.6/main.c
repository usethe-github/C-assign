#include<stdio.h>

int main()
{
  int row,col,j,i,sum=0;
  printf("Enter number of rows in matrix:");
  scanf("%d",&row);
  
  printf("Enter number of colums in matrix:");
  scanf("%d",&col);
  
  int arr[row][col];

  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
	scanf("%d",&arr[i][j]);
     }
  }

  printf("\n");
  
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
        printf("%d ",arr[i][j]);
     }
     printf("\n");
  }

  printf("\n");

  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     { 
        if(i==j)
           sum=sum+arr[i][j];
     }
  }

  printf("\nTrace of entered matix is:%d",sum);

return 0;
}

