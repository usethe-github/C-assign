#include<stdio.h>
#include<string.h>

int main()
{

char str1[50];
char str2[50];
char temp[50];

printf("Enter string 1");
scanf("%s",&str1);

printf("Enter string 2");
scanf("%s",&str2);

printf("\nBefore using memcpy");
printf("\nString 1 is %s",str1);
printf("\nString 2 is %s",str2);

memcpy(temp,str1,strlen(str1));

memcpy(str1,str2,strlen(str1));

memcpy(str2,temp,sizeof(temp));

printf("\nAfter using memcpy \nstr1=%s str2=%s",str1,str2);
return 0;
}

