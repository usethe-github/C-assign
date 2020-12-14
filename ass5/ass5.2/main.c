#include<stdio.h>

int main()
{
    int size,i;
    printf("enter size for two arrays to be added\n");
    scanf("%d",&size);
    
    int num1[size],num2[size],res[size];

    printf("Enter elements for first array:\n");
    for(i=0;i<size;i++)
       scanf("%d",&num1[i]);
    
    printf("Enter elements for first array:\n");
    for(i=0;i<size;i++)
       scanf("%d",&num2[i]);

    
    printf("Result of the array addition:\n");
    for(i=0;i<size;i++)
    {
	res[i] = num1[i] + num2[i];
        printf("%d ",res[i]);
    }

return 0;
}


