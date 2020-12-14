//reversing array element in memory

#include<stdio.h>
#include<stdlib.h>                               //for malloc function in program
int main()
{
  int *ptr,n,i;                                  //ptr will point to the memory created
  printf("Enter number of array element:");
  scanf("%d",&n);

  ptr = (int*)malloc(sizeof(int) * n);

  printf("enter elements of array:");
  for(i=0;i<n;i++) 
      scanf("%d",(ptr+i));

  for(i=(n-1);i>=0;i--)
  {
    printf("%d ",*(ptr+i));
  }
}

