#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to find its Binary,Decimal,Octal,Hexadecimal forms");
	scanf("%d",&num);

	printf("\nDecimal form of number : %d",num);
	printf("\nbinary form of number : %B",num);
	printf("\noctal form of number : %o",num);
	printf("\nhexadecimal form of number : %x",num);

return 0;
}
