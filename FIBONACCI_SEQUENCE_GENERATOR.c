#include<stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the range of Number: ",&n);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n)
{
    int fib;
    if(n==1||n==0)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}