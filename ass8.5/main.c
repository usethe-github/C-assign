#include<stdio.h>
#include<string.h>
void tostring(char [],int);
int main()
{
	char str[50];
	char str1[50];
	int i=0,num;
	printf("enter a string in digits");
	scanf("%s",str);

        printf("\nstring form is:");
	for(i=0;i<strlen(str);i++)
	{
	   printf("%c",str[i]);
	}
        
	printf("\ninteger form of string digits is:");
	for(i=0;i<strlen(str);i++)
	{
	   printf("%d",(str[i]-48));
	}

	printf("\n");
	printf("Enter integer to convert into string");
	scanf("%d",&num);
	tostring(str1,num);

	printf("The string converted from integer is %s",str1);
return 0;
}

void tostring(char str1[],int num)
{
int res,j,n,length=0;
n=num;
while(n != 0)
	{
		length++;
	        n=n/10;
	}
 for(j=0;j<length;j++)
      {

	      res = num%10 ;
	      num = num/10 ;
    	      str1[length-(j+1)] = res + '0';
      }
 str1[length]='\0';
}
