//finding string reverse by recursion

#include<stdio.h>
#include<string.h>

void rev_str(char *);

int main()
{
   char str[10];
   int len,i;
   printf("Enter a string:");
   scanf("%s",str);
   
   
   len = strlen(str);                   //getting length of the string

   printf("\n");
   
   for(i=0;i<len;i++)
   {
      printf("%c",str[i]);              //entered string is printed
   }
   
   printf("\n");
   
   rev_str(str);
   
   return 0;

}
void rev_str(char *s)
{
   if(*s != '\0')
   {
   rev_str(s+1);
   printf("%c",*s);                      //reversed string is printed
   }
}
   

