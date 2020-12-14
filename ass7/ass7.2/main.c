#include<stdio.h>
register int y=0;              // error: registers cannot be declared globally
int main()
{
  register int x=3;
  int *ptr;
  ptr=&x;
  printf("%u",ptr);              //address of register variable cannot be accessed 
  printf("%d",y);
}
