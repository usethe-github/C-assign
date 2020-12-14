//to check system is little endian or big endian

#include<stdio.h>

int main()
{
	int x = 10;
	int y = 0x11223344;
	char ch = (char)y;
	printf("number in lower address  is=%x\n",ch);        //if LSB obtained in lower address then it is little endian system
	if(ch == 0x44)
		printf("System is Little Endian");
	else
		printf("System is Big Endian");               //if LSB obtained in higher address then it is big endian system
	return 0;
}
