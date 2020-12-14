#include <stdio.h>
#include<string.h>

int main()
{
  char str[50],strcp[50];
  int ret;
  printf("Enter string 1 and 2:");
  scanf("%s %s",str,strcp);

  //void *memcpy(void *dest, const void *src, size_t n)
  printf("\nBefore memcpy");
  printf("\n str = %s\nstrcp = %s",str,strcp);

  printf("\nafter memcpy");
  memcpy(strcp,str,sizeof(strcp));
  printf("\nstr = %s\nstrcp = %s",str,strcp);
 
  //int memcmp(const void *str1, const void *str2, size_t n)
  ret = memcmp(str, strcp, 7);

  if(ret > 0) 
  {
     printf("\nstr2 is less than str1");
  }
  else if(ret < 0) 
  {
      printf("\nstr1 is less than str2");
  }
  else
  {
      printf("\nstr1 is equal to str2");
  }

 
  //void memset(void *s,char,size_t);
  printf("\nbefore memset: str = %s",str);
  memset(str+6,'.',sizeof(int));
  printf("\nafter memset: str = %s",str);

 // void bzero(void *s, size_t n);
 printf("\nbefore bzero: str = %s",str);
 bzero(str,4);
 printf("\nafter bzero:str = %s",str);

 return 0;
}
 //memset,bzero 
