//Finding number of 0's and 1's in binary number using recursion approach

#include<stdio.h>

int size,i;
int binary_count(int, int,int);
int count=0,count1=0;
int main()
{
        int a[size];
        printf("enter size of array");
        scanf("%d",&size);
	for( i=0;i<=size;i++)
        scanf("%d",&a[i]);
       
        printf(" \ncount of 1=%d",binary_count(a[i]);
return 0;
}

int binary_count(int a[size],int count0,count1)
{
	  if(size != 0)
	  {
          if(a[size] == 0)
                 count0++;
          else
                 count1++;
          }
	 return  binary_count(a[--size],count0,count1);
}
