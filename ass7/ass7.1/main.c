//checking count of function called


#include<stdio.h>
int count_fun(int ,int);


int main()
{
  int a=10,b=20,count;
  count=count_fun(a,b);                
  count=count_fun(a,b);
  count=count_fun(a,b);
  printf("%d",count);		//getting the count for number of times function is called
  return 0;
}

int count_fun(int x,int y)
{
  static int count=0;
  count++;
  return count;
}

