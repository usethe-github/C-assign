#include <stdio.h>

int main()
{
	int num1,num2;
	printf("Enter two number to be swapped:");
	scanf("%d %d",&num1,&num2);

	printf("\nBefore swapping num1=%d num2=%d",num1,num2);

num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("\nAfter swapping num1=%d,num2=%d\n",num1,num2);
return 0;
}

