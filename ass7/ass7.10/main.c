#include<stdio.h>

sum(int a, int b)
{
	return a+b;
}
sub(int a, int b)
{
	return a-b;

}
product(int a, int b)
{
	return a*b;
}

int main()
{
  int x , y, choice;

  typedef int (*ftype)(int, int);                        // function pointer is made typedef

  ftype fptr[3];
  fptr[0]=&sum;                                          // array of function for airthmetic operations
  fptr[1]=&sub;
  fptr[2]=&product;

  printf("Enter two numbers\n");
  scanf("%d %d",&x,&y);

  printf("1. Addition 2. subtraction 3. Multiplication");
  scanf("%d",&choice);

  printf("Result=%d\n",fptr[choice-1](x,y));
  return 0;
}

