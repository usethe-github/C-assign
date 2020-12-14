//Finding factorial of number with recursion


#include<stdio.h>

int fact(int);
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("\nfactorial of n is:%d \n",fact(n));
return 0;
}

int fact(int num)
{
   if(num==0)
       return 1;
   else
       return  num * fact(num-1);
}
