#include<stdio.h>

int main()
{
	int num,i,j,cnt;

	printf("Enter till which number to find prime numbers:");
	scanf("%d", &num);

	for(i=2;i<=num;i++)
	{
		int cnt=0;

		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			cnt++;
			}
		}
		if(cnt==2)
		{
			printf("%d ",i);
		}
	}
return 0;
}


