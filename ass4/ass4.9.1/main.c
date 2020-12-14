//finding power of n using iterative method

#include<stdio.h>

int main()
{
	int num,pow,i,num1;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("\nEnter power of number:");
	scanf("%d",&pow);
        num1=num;
        for(i=1;i<=(pow-1);i++)
	{
		num = num * num1;
	}
	printf("%d",num);

	return 0;
}
