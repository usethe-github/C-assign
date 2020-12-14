//sum of n numbers with recursion

#include<stdio.h>
int sum1(int );
int sum=0;
int main()
{
int n;

printf("enter n numbers to find their sum");
scanf("%d",&n);
printf("\nSum of n number is:%d",sum1(n));
return 0;
}

int sum1(int range)
{ 
int num;
if(range != 0)
{
scanf("%d",&num);
range --;
sum = sum + num + sum1(range);
}
return  sum;
}




