//entered matrix is identity matrix or not

#include<stdio.h>

int main()
{
  int row,col,j,i,count=0;
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

//checking whether entered matrix is identity or not
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       if(i==j && arr[i][j]==1)
        {
           count = 1;   
	   break;
	}
       else if(i != j && arr[i][j]==0)
	 {
           count=1;
	   break;
	}
       
    }
 }
  if(count == 1)
  {
     printf("it is a identity matrix");
  }
  else
  {
     printf("it is not a identity matrix");
  }
 
return 0;
}
 

  

