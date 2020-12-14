#include<stdio.h>

int main()
{
  int arr[5];
  int i;

  printf("Enter elements of array:");
  for(i=0;i<5;i++)
    scanf("%d",&arr[i]);

  int (*parr)[5];
  parr = &arr;

  printf("\nSize of parr = %ld",sizeof(parr));
  
  printf("\nSize of *parr = %ld",sizeof(*parr));

  printf("\nSize of **parr = %ld",sizeof(**parr));
 
//printing array elements through pointer element
  for(i=0;i<5;i++)
  {
      printf("\n%d ",*(*parr+i));

  }
  
  return 0;
}

