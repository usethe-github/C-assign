#include<stdio.h>

int main()
{
  int size,sum=0,min,max,temp;
  float avg;
  
  printf("Enter the size of array");
  scanf("%d",&size);

  int arr[size];

  for(int i=0;i<size;i++)
  {
    printf("Enter value for arr[%d]: ",i);
    scanf("%d",&arr[i]);

    sum = sum + arr[i];
  }

  printf("\nSum of array elements is:%d",sum);

  avg = sum / size;
  printf("\n Average of array elements is:%.2f",avg);

  for(int i=0;i<=(size-1);i++)
  {
    for(int j=i+1;j<size;j++)
    {
	   if (arr[i] > arr[j]);
	   else
	   {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	   }
      }
    printf("\n%d ",arr[i]);
  }
  max = arr[0];
  min = arr[size-1];
  printf("\nmax = %d,min = %d",max,min);

  return 0;
}
