#include<stdio.h>

int main()
{

int a,b,c,max;
printf("enter three numbers");
scanf(" %d %d %d",&a,&b,&c);

if(a > b && a > c)
{
	 max = a; 
         printf("\n largest number :%d\n",max);
}
else if(a < b && b > c)
 {
	 max = b;
         printf("\n largest number :%d\n",max);
 }
 else
{
	 max = c;
         printf("\n largest number :%d\n",max);
}
return 0;
}
