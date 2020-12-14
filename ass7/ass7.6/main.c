#include <stdio.h>

//no error in the code
int *test(int x);
int main()
{
    int a=5;
    int *p;
    p=test(a);
    
}

int *test(int x)
{
    int y = x * x;
    printf("%d",y);
    return &y;
}
