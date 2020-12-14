#include<stdio.h>
#include<string.h>
int main()
{
char str1[50];
char str2[50];
printf("Enter string 1");
scanf("%s",&str1);
printf("Enter string 2");
scanf("%s",&str2);
printf("\n Before using memcpy");
printf("\n String 1 is %s",str1);
printf("\n String 2 is %s",str2);
memcpy(str2,str1,strlen(str1));
printf("\n After using memcpy str2=%s",str2);
return 0;
}

