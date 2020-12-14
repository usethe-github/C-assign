#include <stdio.h>
#include <math.h>                                   //library for functions used in program 

int main()
{
   int x;
   char ch,ch1;
   printf("\nEnter a character to convert into uppercase:");
   scanf("%c",&ch);

   printf("Enter a number:");
   scanf("%d",&x);

   printf("\n%f\n",sqrt(pow(2,abs(x))));             //nested functions
   putchar(toupper(ch));                       //function to convert lowercase to uppercase
   //printf("\nupper case:%c",ch1);
   return 0;
}
