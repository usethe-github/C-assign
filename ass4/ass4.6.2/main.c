#include <stdio.h>
int fib(int);
int range,next_num;
int main()
{
int num=0;

printf("Enter range for fibonacci series: ");
scanf("%d",&range);
for(int i=0;i<range;i++)
{
printf("%d ",fib(i));
}
return 0;
}


int fib(int num)
  {  
     if(num == 0 || num == 1)
	     return num;
     else
     return fib(num-1) + fib(num-2); 
   }

