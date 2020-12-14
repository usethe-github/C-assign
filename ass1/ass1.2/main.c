#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter a number which is to be reversed: ");
   scanf("%d",&a);

   do
   {
     b = a % 10;
     printf("%d",b);
     a = a / 10;
   }while(a != 0);
   printf("\n");
   return 0;
}
