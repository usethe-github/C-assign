#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];
   int len,i;
   printf("Enter a string:");
   scanf("%s",str);
   len = strlen(str);
   for(i=0;i<len;i++)
   printf("%c",str[i]);
   printf("\n");
   for(i=len;i>=0;i--)
	   printf("%c",str[i]);

}
