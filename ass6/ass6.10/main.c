#include<stdio.h>

int main()
{
   int arr[3][4];
   int (*p)[4];
   int i,j;
   printf("enter array elements\n");
   for(i=0;i<3;i++)
   {
      for(j = 0;j<4;j++)
      {
	 scanf("%d",&arr[i][j]);                                //accepting array elements
      }
   }
   p = arr;
   printf("size of p = %u",sizeof(p));                          //checking size of pointers p,*p,**p
   printf("\nsize of *p = %u",sizeof(*p));
   printf("\nsize of **p = %u",sizeof(**p));
   printf("\nvalue of p = %u",p);                               //checking values of pointers p,(p+1)
   printf("\nvalue of (p+1) = %u\n",(p+1));
   for(i=0;i<3;i++)
   {
      for(j = 0;j<4;j++)
      {
	 printf("arr[%d][%d]=%d   (*(p+%d))[%d]=%d   *(*(p+%d)+%d)=%d\n",i,j,arr[i][j],i,j,(*(p+i))[j],i,j,*(*(p+i)+j));
      }
   }

 return 0;
}
