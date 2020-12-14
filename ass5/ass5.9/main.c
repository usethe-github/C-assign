#include<stdio.h>

int main()
{
  int row,col,temp,j,i;
  printf("Enter number of rows in matrix:");
  scanf("%d",&row);
  
  printf("Enter number of colums in matrix:");
  scanf("%d",&col);
  
  int arr[row][col];
//identity matix

printf("\nIdentity matrix:\n");
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       if(i==j)
          arr[i][j]=1;   
       else
	  arr[i][j]=0;
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
//null matrix
printf("\nNull matrix:\n");
 for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
	arr[i][j]=0;
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
return 0;
}

