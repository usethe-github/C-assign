#include<stdio.h>

int main()
{
   short int x = 0x1234;
   short int temp;
   
   char *p1 =(char*)&x;
   char *p2 = p1 + 1;
   
   //converting big indian into little indian
   temp = *p1;
   *p1 = *p2;
   *p2 = temp;

   printf("%x",x);

 return 0;
}




   

