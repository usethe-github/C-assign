//finding digits in a number with recursion

#include<stdio.h>
int counting(int);
int count=0;
int main()
{
  int num;
  printf("Enter num:");
  scanf("%d",&num);
  printf("number of digits is %d",counting(num));

  return 0;
}

int counting(int num)
{
   int rem; 
   if(num != 0)
   {
   rem = num % 10;
   count++;
   counting(num / 10);
   }
 return count;
 }



