#include<stdio.h>

int main()
{
   int n1,n2;
   printf("Enter two numbers to be swapped: ");
   scanf("%d %d",&n1,&n2);
   printf("\nBefore Swapping:n1=%d , n2=%d",n1,n2);

   n1 = n1 + n2;
   n2 = n1 - n2;
   n1 = n1 - n2;

   printf("\nAfter swapping:n1=%d , n2=%d",n1,n2);
   return 0;
 }

