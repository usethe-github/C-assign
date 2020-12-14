#include<stdio.h>

int main()
{
	int i,j;
	int a[3][4];
	int (*q)[3][4]={a[0],a[1],a[2]};
	printf("enter elements of array:");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<4;j++)
	  {
           scanf("%d",&a[i][j]);	
	  }
	  printf("\n");
	}
	printf("q = %u \n*q = %u \n**q = %u \n***q = %u",q,*q,**q,***q); 

	return 0;
}
