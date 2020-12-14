#include<stdio.h>

int main()
{
 int num,sum,x;
 printf("Enter a number: ");
 scanf("%d",&num);

 while(num>9)
 {   
	sum=0;
	do
	{
	 x=num%10;
	 num=num/10;
	 sum=sum+x;
	}while(num !=0);
	
	num=sum;

 }
 printf("\n sum of digits : %d\n",sum);
 return 0;
}


