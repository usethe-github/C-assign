#include<stdio.h>

int main()
{
int row,col,var,n,sp,i,j;

printf("Enter number of rows:");
scanf("%d",&row);

for(i=0;i<row;i++)
{
   for(sp = 1; sp <= (row-i); sp++)
   {
	printf("  ");
   }
   for(j=0;j<=i;j++)
   {
	   if(j == 0 || i == 0)
	   {
	     var = 1;
             printf("%d",var);
	   }
	   else
	   {
	     var = var* (i-j+1)/j;
	     printf("%4d",var);
	   }
   }
   printf("\n");
}
return 0;
}






