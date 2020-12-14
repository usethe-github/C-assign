#include <stdio.h>

int main()
{
  int num1=0,num2=1,next_num,range;

  printf("Enter range for fibonacci series: ");
  scanf("%d",&range);

  for(int i=0; i<range; i++)
  {
     next_num = num1 + num2;
     printf("%d ",num1);
     num2 = num1;
     num1 = next_num;
  }
 return 0;
}
