#include<stdio.h>

int i,j, max,num1,num2,min,Gcd,Lcm,rem;
void GCD(int num1, int num2);
void LCM(int num1, int num2);
int main()
{

printf("Enter two number whose GCD and LCM is to find: ");
scanf("%d %d",&num1,&num2);

GCD(num1,num2);
LCM(num1,num2);

return 0;
}


void GCD(int num1, int num2)
{
if(num2 > num1)
{
  max = num2;
  min = num1;
  i=max;
  j=max;
}
else
{
  max = num1;
  min = num2;
  i=max;
  j=max;
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

void LCM(int num1, int num2)
{
while(1)
{
	if( j % num1 == 0 && j % num2 == 0)
	{
	 Lcm = j;
 	printf("\nlcm = %d",Lcm);
	break;
	}
  j =j + i ;
}  
}

