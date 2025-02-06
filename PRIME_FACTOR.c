#include<stdio.h>

void prime(int n);

int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	prime(a);
	return 0;
}

void prime(int a)
{
    printf("prime factor: ");
    for(int i=1;i<=a;i++)
    {
        for(int j=2;j<=a;j++)
        {
            if(a%j==0)
            {
                printf("%d ",j);
                a=a/j;
                j=1;
            }
        }  
    }
}