#include<stdio.h>
#include<string.h>
int main()
{
   char str1[100],str2[100],str3[100];
   int i=0,j=0,length=0;
   printf("enter string1 & 2 : ");
   scanf("%s %s",str1,str2);
   
   int choice;
   printf("\nEnter Choice:");
   printf("\n1.concatinating two strings using sprintf \n2.copying one string into another using sprintf \n3.FINDING LENGTH OF THE STRING");
   scanf("%d",&choice);
   
   switch(choice)
   {
       case 1:   //concatinating two strings using sprintf
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
            sprintf(str3,"concatinated string is %s",str1);
            puts(str3);
        break;
        
        case 2:   //copying one string into another using sprintf
             for(i=0;i<=strlen(str1);i++)
            {
                str2[i] = *(str1+i);
            } 
            sprintf(str3,"\ncopied string is:%s",str2);
            puts(str3);
        break;
        
        case 3:    //FINDING LENGTH OF THE STRING
            while(str1[i] != '\0')
            {
                length++;
                i++;
            }
            sprintf(str1,"length of string1 is %d",length);
            puts(str1);
            break;
   }
return 0;
}
