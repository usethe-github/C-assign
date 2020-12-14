#include<stdio.h>

int main()
{
	int k=0,i=0,y=0,x=0,q=0,p=0;

           printf("Before : %d %d",k,i);
	   k=i++;
	   printf("\nAfter : %d %d",k,i);
	   k=++i;
	   printf("\nAfter : %d %d",k,i);


	   printf("\nBefore : %d %d",y,x);
           y = x++ * 10;
           printf("\nAfter : %d %d",y,x);
           y = ++x *10;
           printf("\nAfter : %d %d",y,x);

	   printf("\nBefore : %d %d",q,p);
           q = p-- /3;
           printf("\nAfter : %d %d",q,p);
           q = --p / 3;
           printf("\nAfter : %d %d",q,p);

return 0;
}




