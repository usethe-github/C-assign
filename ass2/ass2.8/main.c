#include<stdio.h>

int main()
{
	int i,num,sum=0,half;
	printf("Enter a number to check it is perfect or not:");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
	  if( num % i == 0)
	    {
		sum = sum + i;
	    }
	}

	half = sum / 2;
	if(num == half)
	{
		printf("\n%d is perfect number",num);
	}
	else
		printf("\n%d is not perfect number",num);
return 0;
}


