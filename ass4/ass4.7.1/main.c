//conversion of numbers using iterative method


#include<stdio.h>
#include<string.h>

int main()
{
int num,i,choice,a[100],sum=0,j=1,x,s_num,len;
 char num1[50];
printf("enter choice:\n1. decimal to binary \n2.decimal to Octal \n3.decimal to hexadecimal \n4.binary to decimal \n5.octal to decimal \n6.hexadecimal to decimal");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("enter a number :");
                scanf("%d",&num);

                s_num = num;
		for( i=0;num>0;i++)
		{
		  a[i]=num%2;
		  num=num/2;
		}
		printf("binary from of entered Decimal number %d is\n",s_num);
                for(i=i-1;i>=0;i--)
		  printf("%d",a[i]);
		break;

	case 2:
		printf("enter a number :");
                scanf("%d",&num);

                s_num = num;


		for(i=0;num>0;i++)
		{
		  a[i]=num%8;
		  num=num/8;
		}
		printf("octal from of entered Decimal number %d is\n",s_num);
                for(i=i-1;i>=0;i--)
		  printf("%d",a[i]);
		break;

	case 3:
		printf("enter a number :");
                scanf("%d",&num);

                s_num = num;

		
		for(i=0;num>0;i++)
		{
		  a[i]=num%16;
		  num=num/16;
		  if(a[i]<10)
		     a[i] = a[i] + 48;
		  else
		    a[i] = a[i] + 55;
		}
		printf("hexadecimal from of entered Decimal number %d is\n",s_num);
		for(i=i-1;i>=0;i--)
                  printf("%c",a[i]);
                break;

	case 4:
		printf("enter a number :");
                scanf("%d",&num);

                s_num = num;

		do
		{
		    x=num%10;
		   num=num/10;
		  
		   if(x)
		   {
			   sum += j;
		   }
		   j*=2;
		}while(num!=0);
		printf("dec number is:%d",sum);
		break;

	case 5:
               printf("enter a number :");
                scanf("%d",&num);

                s_num = num;

                do
                {
                    x=num%10;
                   num=num/10;
                  
                   if(x)
                   {
                           sum = sum + (x*j);
                   }
                   j*=8;
                }while(num!=0);
                printf("dec number is:%d",sum);
                break;
	case 6:
		i = 0;
                scanf("%s",&num1);
		
	        len = strlen(num1);
		for(i=len-1;i>=0;i--)
		{
			if(num1[i]>='0' && num1[i]<='9')
			{
			   sum += (num1[i] - 48)*j;
			   j = j*16;
			}
			else if(num1[i]>='A' && num1[i]<='F')
                        {
                           sum += (num1[i] -55)*j;
                           j = j*16;
                        }
		}
		
		printf("%d",sum);



         

}

return 0;
}
