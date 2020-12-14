#include<stdio.h>

int main()
{
	char str[]="a.b.c.d";
        int intform;
	char *ptr;
	intform = atoi(str);
	printf("%d",intform);
        ptr = str;

       // intform = strtoul(str,&ptr,10);
//	printf("%d",intform);

}
