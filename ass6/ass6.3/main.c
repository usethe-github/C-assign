//to check system is little endian or big endian

#include<stdio.h>

int main()
{
	int x = 10;
	int y = 0x11223344;
	int *p;
	char ch;
	p = &y;
	do
	{
	ch =(char)*p ;
	printf("number in lower address  is=%x\n",ch);        //printing little endian
	p--;
	}while(ch != 11);
	return 0;
}
