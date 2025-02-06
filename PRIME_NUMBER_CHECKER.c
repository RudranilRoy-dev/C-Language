#include<stdio.h>

void prime(int a);

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    prime(a);
    return 0;
}

void prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is a prime number.",a);
    }
    else
    {
        printf("%d is not a prime number.",a);
    }
}