#include<stdio.h>

int main()
{
int x=20,y=50;

/*const int *p;                //error:as x is made constant
p=&x;
*p=10;                 
printf("*p=%d \np++=%d \n(*p)++=%d ",*p,p++,(*p)++);
p=&y;
printf("*p=%d",*p);
*/

/*int const *p;
p=&x;
*p=10;
printf("*p=%d \np++=%d \n(*p)++=%d ",*p,p++,(*p)++);
p=&y;
printf("*p=%d",*p);
*/

/*
int *const p = &x;   //pointer is constant
*p=10;
printf("*p=%d \np++=%d \n(*p)++=%d ",*p,p++,(*p)++);   //p++ not allowed
p=&y;                                                  //p=&y not allowed
printf("*p=%d",*p);
*/

const int*const p=&x;
*p=10;
printf("*p=%d \np++=%d \n(*p)++=%d ",*p,p++,(*p)++);
p=&y;
printf("*p=%d",*p);

}

