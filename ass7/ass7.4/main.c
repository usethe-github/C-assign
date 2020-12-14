#include<stdio.h>
void swap_value(int,int);
void swap_address(int*,int*);
int main()
{
	int num1,num2;
	printf("Inside main\n");
	printf("Enter two numbers");
	scanf("\n %d %d",&num1,&num2);   	 	     //Before swapping num1 = 10 ,num2 = 20
	swap_value(num1,num2);                               //swapping by call by value
	printf("\nAfter swapping by value");
	printf("\nnum1=%d num2=%d",num1,num2);               //num1 = 10 num2 = 20 swap by value doesnt happen 
	swap_address(&num1,&num2);                           // swapping by address
	printf("\nAfter swap by address");                
	printf("\nnum1=%d num2=%d",num1,num2);               //num1 = 20; num1 = 10 
}



void swap_value(int n1,int n2)
{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
}

void swap_address(int *n1,int* n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2; 
	*n1 = *n1 - *n2;
}
