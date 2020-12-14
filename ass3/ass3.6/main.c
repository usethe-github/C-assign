#include<stdio.h>

int main()
{
 int num1;
 float num2;
 printf("Enter  number:");
 scanf("%d %f",&num1,&num2);

 printf("num1 = %5d \nnum1 = %05d \nnum1 = %-5d",num1,num1,num1);

 printf("\nnum2 = %8.2f \nnum2 = %.2f",num2,num2);

 return 0;

}

