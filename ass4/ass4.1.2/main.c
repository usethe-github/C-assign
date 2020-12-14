//reversing the array of integers using recursion method

#include<stdio.h>

void rev_arr(int *,int);

int main()
{
  int arr[5],i,n;

  printf("enter number of elements in th array:");
  scanf("%d",&n);
  printf("\nenter elements in th array:");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

  printf("\n");

  rev_arr(arr,n);
  
	return 0;
}

void rev_arr(int *ar,int size)
{
  int i;
  if(size>0)
  {
       i=size-1;
       rev_arr((ar+1),i);
       printf("%d ",*(ar--));
  }

}

	
