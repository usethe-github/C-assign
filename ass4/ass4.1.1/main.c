//reversing the array of integers using iterative method

#include<stdio.h>

int main()
{
  int arr[5],i;
  printf("enter elements in th array:");
  for(i=0;i<5;i++)
  {
  scanf("%d",&arr[i]);
  }

  for(i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");

  for(i=4;i>=0;i--)
  { 
    printf("%d ",arr[i]);
  }
	return 0;
}
