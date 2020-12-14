#include<stdio.h>

  int main()
  {
       char ch;
       printf("enter a character");
       scanf("%c",&ch);
       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I' )
           {
	      printf("\nEntered character is vowel");
	   }

	 else
	    printf("\nEntered character is not a vowel");
         
	 return 0;
   }
