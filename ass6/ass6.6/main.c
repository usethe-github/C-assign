#include<stdio.h>

int main()
{
  float a=10;
  void *k;                 //initializing void pointer k
  k = &a;
  printf("&a=%u k=%u ",&a,k);
  k++;
  printf("\nk=%u",k);      //in compiler shows increment of address by 1byte but by concepts it is invalid because k has no datatype
}

