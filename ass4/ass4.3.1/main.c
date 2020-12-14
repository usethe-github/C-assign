//sum of n numbers without recursion

#include<stdio.h>

int main()
{
int n,sum=0,num;
printf("enter n numbers to find their sum");
scanf("%d",&n);

printf("\nEnter n numbers:");
for(int i=0 ; i<n ; i++)
{
  scanf("%d",&num);
  sum = sum + num;
}

printf("\nSum of n number is:%d",sum);
return 0;
}


