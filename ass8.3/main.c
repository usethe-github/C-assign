#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int result,res,res1,x=1234,b=5678,z;
float y=201.13,a;
char *p,*q,*t;
char str[]="...cdac?acts;pune!pashan,panchwati";
char seps[50]="?!;,. \t";
char str1[50],str2[50],str3[50],str4[50],str5[50],str6[50]="1356",str7[50]="210.1243",str8[50];
printf("\n*****Before***** ");
printf("\n Enter three strings\n");
scanf("%s %s %s",&str1,&str2,&str3);

//char*strncpy(char *s1,const char *s2,size_t n);
printf("\n ***** after applying strncpy function*****");
strncpy(str2,str1,4);
printf("\n string 2 is %s",str2);
printf("\n string 1 is %s",str1);

//char *strncat(char *str1,const char*str2,size_t n);
printf("\n ***** After applying strncat function*****");
strncat(str2,str1,4);
printf("\nstring 2 is %s",str2);
printf("\n string 1 is %s",str1);

//int *strncmp(const char *str1,const *str2,size_t n);
printf("\n ***** After applying strncmp function*****");
result=strncmp(str2,str1,sizeof(int));
if(result==0)
{
	printf("\n Both strings are same");
}
else
{
	printf("\n Not same");
}

//int *strcasecmp(const char *str1,const *str2);
printf("\n *****After applying strcasecmp*****");
res=strcasecmp(str1,"cdac");
if(res==0)
{
	printf("\nBoth strings are same");
}
else
{
	printf("\n Not same");
}

//int *strcasecmp(const char *str1,const *str2,size_t n);
printf("\n*****After applying strncasecmp*****");
res1=strncasecmp(str1,"cdac12",4);
if(res1==0)
{
	printf("\n Both strings are same");
}
else
{
	printf("\n Not same");
}
printf("\n *****After applying strchr*****");
//char *strchr(const char *str,int ch);
p=strchr("actscdacpune",'c');
printf("\n %s",p);
printf("\n*****After applying strrchr*****");
//char *strrchr(const char *str,int ch);
p=strrchr("actscdacpune",'c');
printf("\n %s",p);
printf("\n*****After applying strstr*****");
//char *strstr(const char *str,const char *str);
q=strstr("cdac acts pune","pune");
printf("\n %s",q);
printf("\n*****After applying strtok*****\n");
//char *strtok(char *str1,const char *str2);
t=strtok(str,seps);
while(t != NULL)
{
printf("%s",t);
t=strtok(NULL,seps);
}
printf("\n *****After applying sprintf*****\n");
//int sprintf(char *str,const char *controlstring[,argument1,arrgument2,.....]);
sprintf(str4,"%d",x);
sprintf(str5,"%f",y);
printf("str4=%s , str5=%s\n ",str4,str5);

printf("\n*****After applying sscanf*****\n");
//int sscanf(const char*str,const char *controlstring[,address1,address2,....]);
sscanf(str6,"%d",&z);
sscanf(str7,"%f",&a);
printf("value of z=%d,value of a=%.2f \n",z,a);
printf("\n*****After applying snprintf*****\n");
//int snprintf(char *str,size_t size,const char*controlstring[,argument1,argument2,...]);
snprintf(str8,2,"%d",b);
printf("%s",str8);
return 0;
}

