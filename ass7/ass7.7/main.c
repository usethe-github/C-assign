#include <stdio.h>
void test(const int*);
void test(int *);

int main()
{
   int x=10,y=20;
   int *p;                    //*p is int pointer
   p = &x;                
   const int *q = &y;         //*q i.e. y cannot be modified because it is const int pointer
   test(p);              
   test(q);
   return 0;
}

void test(const int *a)      //p is now passed to const int *a
{
   *a=5;                     //*a cannot be changed
   printf("\nx=%d",*a);     
}

void test(int *b)
{
   *b=10;
   printf("\nb=%d",*b);
}

