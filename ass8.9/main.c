#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
   int num,sum=0;
   float avg;
   printf("FINDINNG SUM AND AVG USING COMMAND LINE ARGUMENTS");

   printf("\nargc = %d",argc);

   for(int i=0;i<argc;i++)
   {
      sum = sum + atoi(argv[i]);
   }

   printf("\nsum = %d",sum);

   avg = sum/(argc-1);

   printf("\navg = %f",avg);
}

