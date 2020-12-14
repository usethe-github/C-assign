//finding digits in a number without recursion

#include<stdio.h>

int main()
{
  int num,rem,count=0;
  printf("Enter num:");
  scanf("%d",&num);

  do
  {
   rem = num % 10;
   count++;
   num = num / 10; 
  }while(num != 0);

  printf("number of digits is %d",count);

  return 0;
}

