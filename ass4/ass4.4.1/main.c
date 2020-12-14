#include<stdio.h>

int main()
{
int n,fact=1;
printf("Enter a number:");
scanf("%d",&n);
do
{
  fact=fact*n;
  n--;
}while(n!=0);
printf("\nfactorial of n is:%d \n",fact);
return 0;
}
