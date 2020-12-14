// passing 1D,2D array to function ,performing Matrix operation

#include<stdio.h>
int matrix(int a[][],int b[][],int);
int Max_min_sum(int a[][],int);

int main()
{
int a[20][20],b[20][20],i,j,n1,n2,sum;
printf("\n Enter size of array 1");
scanf("%d",&n1);

printf("\n Enter the elements of array 1\n");
for(i=0;i<n1;i++)
{
	for(j=0;j<n1;j++)
		{
			scanf("a[%d][%d]:%d",i,j,&a[i][j]);
		}
}
printf("\n Enter size of array 2");
scanf("%d",&n2);

printf("\n Enter the elements of array 2\n");
for(i=0;i<n2;i++)
{
        for(j=0;j<n2;j++)
                {
                        scanf("b[%d][%d]:%d",i,j,&b[i][j]);
                }
}
Max_min_sum(b,n2);
matrix(a,b,n1);

return 0;
}


int matrix(int a[20][20],int b[20][20],int n1 )
{
	int i,j,k,add[20][20],sub[20][20],mul[20][20];
	int sum=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			add[i][j]= a[i][j] + b[i][j];
			sub[i][j]= a[i][j] - b[i][j];
			for(k=0;k<n1;k++)
			{
				sum=sum + a[i][k] +b[k][j];
			}
			mul[i][j]=sum;
		}
	}

	printf("Addition of Matrix are:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",add[i][j]);
		}
	
	printf("\n");
	}

	 printf("Subtraction of Matrix are:\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d",sub[i][j]);
                }

        printf("\n");
        }

	 printf("Multiplication of Matrix are:\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d",mul[i][j]);
                }

        printf("\n");
        }
int Max_min_sum(int a[20][20],b[20][20],int n)
{
	int min,max,i,j,sum=0;
	min=max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
				min=a[i][j];
			elseif(max<a[i][j])
				max=a[i][j];
			else
				printf("Write correct numbers");
			sum=sum+a[i][j];
		}
	}

	printf("\n max array matrix element=%d",max);
	printf("\n min array matrix element=%d",min);

	printf("\n sum of array matrix elements=%d",sum);
}




					

