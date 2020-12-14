#include<stdio.h>

int main()
{
  int row,col,temp,j,i;
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

  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
        printf("%d ",arr[i][j]);
     }
     printf("\n");
  }

  //transpose of array:column becomes rows and rows becomes column
  temp =  row;
  row  =  col;
  col  =  temp;
  
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
	     printf("%d ",arr[j][i]);
     }
     printf("\n");
  }
}
  

