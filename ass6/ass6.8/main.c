#include<stdio.h>
#include<assert.h>

int main()
{
  int *p=NULL;
  int i=10;
  //p=&i;
  assert(p!=NULL);
  printf("%d\n",*p);
} 
