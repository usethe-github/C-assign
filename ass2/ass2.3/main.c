#include<stdio.h>

int main()
{
 int subject,marks,total_marks,obt_marks=0,choice;
 float percentage;
 printf("Enter number of subjects: ");
 scanf("%d",&subject);

 for(int i=1;i<=subject;i++)
	{
	 printf("\nEnter marks of subject %d of a student: ",i);
	 scanf("%d",&marks);
         obt_marks  = obt_marks + marks;
	}
         printf("\nTotal marks obtained = %d", obt_marks);
         
	 total_marks = 100 * subject;
	 printf("\nTotal marks : %d",total_marks);

         percentage = ((float)obt_marks /(float) total_marks) * 100;
	 printf("Percentage=%.2f",percentage);


         if(percentage > 75 && percentage <= 100)
	   {
		printf("\nGrade of Student is A");
	   }
	 else if(percentage > 60 && percentage <= 75)
	 {
               printf("\nGrade of Student is B");
         }
	 else if(percentage >40 && percentage <= 60)
	   {
                printf("\nGrade of Student is C");
           }
	 else if(percentage > 0 && percentage <= 40 )
           {
                printf("\nGrade of Student is D");
           }
	 
 return 0;
}


