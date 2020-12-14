#include<stdio.h>

int main()
{
	int a=10,b=20,c=30,d;
	printf("BEFORE: a=%d b=%d c=%d d=%d",a,b,c,d);

	d = ++a, ++b, ++c, a+5;
        printf("\nAFTER: a=%d b=%d c=%d d=%d",a,b,c,d);
	d= (++a, ++b, ++c, a+5);
	printf("\nAFTER: a=%d b=%d c=%d d=%d",a,b,c,d);

return 0;
}
