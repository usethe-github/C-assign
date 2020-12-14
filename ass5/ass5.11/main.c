//whether entered matrix is null matrix or not

#include<stdio.h>

int main()
{
  int row,col,j,i,count0=0;
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
 
//checking whether entered matrix is null matrix or not

for(i=0;i<row;i++)
 {
   for(j=0;j<col;j++)
    {
       if(arr[i][j]==0)
	 count0++;
    }
  }
if(count0 == (col * row))
{
   printf("\nit is null matrix");
}
else
   printf("\n not a null matrix");
return 0;
}
 

  

