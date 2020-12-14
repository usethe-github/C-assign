#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int val;
long int val1;
long long int val2;
double a;
char str[20];
char str1[20]="12345 Hello world";
char *ptr;
long res;

//int atoi(const char *str);
strcpy(str,"hello");
val=atoi(str);
printf("string value is %s, int value is %d \n",str,val);
strcpy(str,"12345221");
val=atoi(str);
printf("string value is %s, int value is %d \n",str,val);
//long int atol(const char *str);
strcpy(str,"hello");
val1=atol(str);
printf("string value is %s, long int value is %ld \n",str,val1);
strcpy(str,"12345671221889");
val1=atol(str);
printf("string value is %s, long int value is %ld \n",str,val1);
//long long int atoll(const char *str);
strcpy(str,"hello");
val2=atol(str);
printf("string value is %s, int value is %lld \n",str,val2);
strcpy(str,"12345678911310823");
val2=atol(str);
printf("string value is %s, int value is %lld \n",str,val2);
//double atof(const char *string)
strcpy(str,"20112.122");
a=atof(str);
printf("string value is %s, float value is %f \n",str,a);
strcpy(str,"helloworld");
a=atof(str);
printf("string value is %s, float int value is %f \n",str,a);
//long int strtol(const char *str, char **endptr, int base);
res=strtol(str1,&ptr,10);
printf("\n %ld",res);
printf("\n %s",ptr);
//unsigned long int strtoul(const char *str, char **endptr, int base);
res=strtoul(str1,&ptr,10);
printf("\n %ld",res);
printf("\n %s",ptr);

return 0;
}
