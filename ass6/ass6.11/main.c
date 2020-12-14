#include<stdio.h>

int main()
{
   int size,i;
  // int *p;
   printf("enter size of array");
   scanf("%d",&size);
   int arr[size];
  
   printf("Enter array of elements:");
   for(i=0;i<size;i++)
   {
   scanf("%d",&arr[i]);
   }

//   p=(int*)&arr;
  // p=p++;
  // printf("last element %d",*((*p)-1));
   printf("last element is:%d",*((*(&arr+1))-1));
   return 0;

}

