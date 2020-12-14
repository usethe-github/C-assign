//passing function name as parameter
#include<stdio.h>

int sum(int,int);
void test(int,int,int*(int,int));
int main()
{
 int a,b;
 printf("Enter two numbers");       // accept two numbers
 scanf("%d %d",&a,&b);
 test(a,b,sum);                    //calling test function

 return 0;
}

int sum(int a, int b)
{
       	return a+b;
}
void test(int a,int b,int*(sum)(int,int))   // giving function name sum as a parameter of fun test
{       int c;
        c=sum(a,b);
	printf("sum=%d",c);
}
