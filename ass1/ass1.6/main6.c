#include<stdio.h>
int main()
{       
        int n,sum=0,i,value;
	float avg;
        
        printf("enter how many numbers to be added ");
        scanf("%d",&n);
        
        printf("\n enter %d integer numbers\n",n);
        
        for(i=1;i<=n;i++)
        {       
                scanf("%d",&value);
                
                sum=sum+value;
        }       
        printf("sum:%d",sum);
        
        avg=sum/n;
        printf("\n average is %.2f",avg);
        
        return 0;
}

