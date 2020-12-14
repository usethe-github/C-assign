#include<stdio.h>

int main()
{
 int hh,mm,ss,sec,time,hh1,ss1,mm1,rem;
 printf("Enter hh:mm:ss to convert in sec");
 scanf("%d %d %d",&hh,&mm,&ss);

 sec = hh * 3600 + mm * 60 + ss;
 printf("\nhh:mm:ss in seconds is %d",sec);

 printf("\n Enter seconds to convert it into hh:mm:ss form:");
 scanf("%d",&time);

 hh1 = time / 3600;
 mm1 = ( (time - (hh1 *3600)) / 60);
 ss1 = (time - (hh1 *3600)) - (mm1 * 60);
 printf("\nhh:mm:ss %d:%d:%d",hh1,mm1,ss1);  

 return 0;
}

