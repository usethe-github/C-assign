#include<stdio.h>

int i,j, max,num1,num2,min,Gcd,rem;
int GCD(int num1, int num2);
int main()
{

printf("Enter two number whose GCD is to find: ");
scanf("%d %d",&num1,&num2);
printf("gcd of numbers is :%d",GCD(num1,num2));

return 0;
}


int GCD(int num1, int num2)
{

if(num2 != 0)
	return GCD(num2,num1%num2);
else
  return num1;

}

