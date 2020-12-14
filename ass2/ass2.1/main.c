#include "funheader.h"

 int main()
{
int choice,n1,n2,add,sub,mul;
float div;

 printf("Enter two numbers to perform operation: ");
 scanf("%d %d",&n1,&n2); 
 
 printf("\nEnter choice to perform operation:  \n0.Exit  1.addition  2.subtraction  3.multiplication  4.Division");
scanf("%d",&choice); 

switch(choice)
{
  case 0:
   printf("Exit\n");
   break;

  case 1:
 add= fun_add(n1,n2);
 printf("addition is:%d\n",add);
 break;

  case 2:
 sub = fun_sub(n1,n2);
 printf("Substraction is:%d\n",sub);
 break;
  case 3:
 mul = fun_mul(n1,n2);
 printf("multiplication is:%d\n",mul);
 break;
  case 4:
 div = fun_div(n1,n2);
 printf("division  is:%.2f\n",div);
 break;
 
  default:
   break;
}

return 0;
}




    
