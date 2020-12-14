#include<stdio.h>

int main()
{
int num,rem,sum=0,num_copy;

printf("Enter the number:" );
scanf("%d",&num);

num_copy = num;
    do
      {
        rem = num % 10;
        rem = rem * rem * rem;
        sum = sum + rem;
        num = num / 10;
      }while(num != 0);

     if(num_copy == sum)
      {
        printf("Entered number %d is Armstrong number:" ,num_copy);
      }
     else
      {
       printf("Entered number %d is not a Armstrong number:" ,num_copy);
      }
return 0;
}



