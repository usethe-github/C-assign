/*myheader.h
#include<stdio.h>
int strLength(char *);   
void strCopy(char *,const char *,int);
void strconcat(char [],const char []);
void strComp(char [],char []);
void strReverse(char [],int);
int charOcc(char [],int);
int lastoccur(char [],int);
int countoccur(char [],int);
void substring(char [],char []);
void stringpos(char [],char [],int,int);
*/

/*len.h
#include"my_header.h"
int strLength(char *str)                                         // a. finding length of string
{
    int i=0,length=0;
    while(str[i] != '\0')
    {
      length++;
      i++;
    }
    return length;
}
*/

/*copy.h
#include"my_header.h"
void strCopy(char *str2,const char *str3,int len)                //b. copying one string to other
{
     int i;
    for(i=0;i<len;i++)
     {
     str2[i] = *(str3+i);
     }
}

*/

/*concat.h
#include"my_header.h"
void strconcat(char str1[],const char str2[])                    // Concatenate two strings
{
   int i=0,j=0;
   while( str1[i] != '\0')
{
        i++;
}
  while( str2[j] != '\0')
   {
           str1[i] = str2[j];
           i++;
           j++;

   }
   str1[i] = '\0';
}

*/

/*compare.h
#include "my_header.h"                              // String compare
void strComp(char str1[],char str3[])
{
   int i=0,flag;
   
   while(str1[i] == str3[i])
   {
           if(str1[i]=='\0' && str3[i] =='\0')
           {
                   flag=1;
           }

           i++;
   }

   if(flag == 1)
   {  
        printf("\n %s and  %s  are same",str1,str3);
   }
   else
   {    
        printf("\n%s and %s  are  not same",str1,str3);
   }
}
*/

/*reverse.h
#include"my_header.h"

void strReverse(char str1[],int len)
{
int i,j;
  printf("\nReversed string is: ");
  for(i=len;i>=0;i--)
  { 
   printf("%c",str1[i]);    
  }	  
}

*/

/*charOccurance.h
#include "my_header.h"


int charOcc(char str[],int len)
{
    int i=0,flag,pos;
    char ch;
    printf("\nEnter char whose position is to found:");
    scanf("%*c");
    scanf("%c",&ch);
    while(str[i] != '\0')
    { 
      if(str[i]==ch)
      {   
   	  printf("%c occurs at pos %d",ch,i+1);
return 0;                    
      }
      i++;
    }
return -1;
 
}

*/

/*lastoccur.h
#include "my_header.h"

int lastoccur(char str[],int len)
{
    int i=0,index;
    char ch;
    printf("\nEnter char whose last position is to found:");
    scanf("%*c");
    scanf("%c",&ch);
    while(str[i] != '\0')
    { 
      if(str[i]==ch)
      {   
      index=i;
      }
      i++;
    }
if(index==0)
{
printf("\n No such character found");
}
else
{
printf("\n %c occurs at position %d",ch,index+1);
}
}

*/

/*countoccur.h
#include "my_header.h"

int countoccur(char str[],int len)
{
    int i=0,flag=0;
    char ch;
    printf("\nEnter char:");
    scanf("%*c");
    scanf("%c",&ch);
    while(str[i] != '\0')
    { 
      if(str[i]==ch)
      { 
      flag++;
      }
      i++;
    }
if(flag==0)
{
printf("\n No such character found");
}
else
{
printf("\n %c occurs %d times",ch,flag);
}
}

*/

/*substring.h
#include"my_header.h"

void substring(char str1[],char str2[])
{
int i,j;
for(i=0,j=0;str1[i] != '\0' && str2[j] != '\0';i++)
{	
	if(str1[i]==str2[j])
		{
			j++;
		}
}

if(j==0)
{
printf("\n No such string found");
}
else
{
printf("\n string found at position %d", (i-j) + 1);
}
}
*/

/*stringpos.h
#include"my_header.h"
void stringpos(char str1[],char str2[],int n1,int n2)
{
int i,j;
for(i=0,j=0;str1[i] != '\0' && str2[j] != '\0';i++)
{	
	if(str1[i]==str2[j])
	{
	j++;
	}
}
//printf("\n %d %d",n1,n2);
//printf("\n %d %d",i,j);
if(i==n1 && j==n2)
 {
 printf("\n string ends with substring");
 }
else if(i==j)
 {
 printf("\n String starts with substring");
 }
else
 {
 printf("\n String not found");
 }
}
*/




#include"my_header.h"
#include"len.h"
#include"copy.h"
#include"concat.h"
#include"compare.h"
#include"reverse.h"
#include"charOccurance.h"
#include"lastoccur.h"
#include"countoccur.h"
#include"substring.h"
#include"stringpos.h"
int main()
{
	char str2[50];
	char str3[50];
	char str4[50];
	char str5[50];
	int length1,length2,length3,length4,length5,length6;
	char str1[50] = "CDAC-ACTS";
    printf("\nString 1 is %s ",str1);
	printf("\nEnter string 2:");
	scanf("%s",str2);
    printf("\nEnter string 3:");
    scanf("%s",str3);
	printf("\n Enter string 4");
	scanf("%s",str4);
	printf("\n Enter string 5");
	scanf("%s",str5);
    length1=strLength(str1);
    length2=strLength(str2);
    length3=strLength(str3);
	printf("\nlength of string1 = %d",length1);
	printf("\nlength of string2 = %d",length2);
	printf("\nlength of string3 = %d",length3);
	strCopy(str2,str3,length3);
    printf("\nstring 2 after copy is :%s\n",str2);
	strconcat(str1,str3);
    printf("\nstrings 1 after concatenate  is %s\n",str1);
    printf("\nComparing string1 and string 3....");
    strComp(str1,str3);
    printf("\nComparing string2 and string 3....");
	strComp(str2,str3);
	length4=strLength(str2);
	printf("\nReversing String2:");
	strReverse(str2,length4);
	printf("\nSearching character from string2:");
    charOcc(str2,length4); 
    printf("\nFinding last occurance of any character from string2:");
    lastoccur(str2,length4);
    printf("\nSearching entered character occurance in string2");
	countoccur(str2,length4);
	
	length5=strLength(str4);
	length6=strLength(str5);
	substring(str4,str5);
	stringpos(str4,str5,length5,length6);

return 0;
}


