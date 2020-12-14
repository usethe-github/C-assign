#include<stdio.h>
int main()
{
  int *a;                  //a is integer pointer 
  char *b;                 //b is char pointer
  void *k;                 //initializing void pointer k
  k = b;
  printf("a=%u b=%u k=%u ",a,b,k);
  a =(int*)k;               //typecasting char pointer through void pointer

  printf("\n k=%u a= %u b=%u",k,a,b);
  k++;
  b++;
  a++;
  printf("\nk++ = %u  b++ = %u  a++=%u",k,b,a);
}
