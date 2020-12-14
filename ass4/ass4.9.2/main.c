//finding power of n using recursion method

#include<stdio.h>
int power(int,int,int);

int main()
{
	int num,pow,i,num1;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("\nEnter power of n");
        scanf("%d",&pow);
	num1=num;
        num=power(num,pow,num1);
        printf("%d",num);
	return 0;
}

int power(int num,int pow,int num1)
{
 
	
	num = num * num1;
	pow--;
	if(pow > 1)
	 power(num,pow,num1);
	else 
	  return num;
}

