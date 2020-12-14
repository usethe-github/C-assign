#include<stdio.h>
int *sum_product(int,int);
int main()
{
  int num1,num2;
  int*p;
  printf("Enter two numbers");
  scanf("%d %d",&num1,&num2);                     // Accept two numbers

  p=sum_product(num1,num2);                       //Function call for sum and product
  printf("sum=%d product=%d",p[0],p[1]);
  return 0;
}

int *sum_product(int a, int b)                   //Function pointer of two parameters
{
  static int sap[2];                             
  sap[0]=a+b;
  sap[1]=a*b;
  return sap;
}
