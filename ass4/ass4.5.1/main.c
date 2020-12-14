//finding gcd of two number using iterative method
//
#include<stdio.h>

int  max,num1,num2,min,Gcd,rem;
void GCD(int num1, int num2);
int main()
{

printf("Enter two number whose GCD  is to find: ");
scanf("%d %d",&num1,&num2);

GCD(num1,num2);
return 0;
}


void GCD(int num1, int num2)
{
if(num2 > num1)
{
  max = num2;
  min = num1;
}
else
{
  max = num1;
  min = num2;
}

do
     {
       rem = max % min;
       max = min;
       min = rem;
     }while(rem != 0);
    Gcd = max;
    printf("\n Gcd of entered numbers is = %d\n",Gcd);
}

