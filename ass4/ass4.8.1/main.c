//Finding number of 0's and 1's in binary number using iterative approach

#include<stdio.h>

int main()
{
	int size,count0=0,count1=0;
	printf("enter size of array");
	scanf("%d",&size);
	int a[size];
	printf("enter a binary number:");
	for(int i=0;i<size;i++)
	{
	  scanf("%d",&a[i]);
          if(a[i] == 0)
		  count0++;
	  else
		  count1++;
	}
	printf("count of 0=%d \ncount of 1=%d",count0,count1);
return 0;
}
