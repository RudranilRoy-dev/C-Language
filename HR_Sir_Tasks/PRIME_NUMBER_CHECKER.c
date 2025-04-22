#include<stdio.h>

int prime(int a, int i);

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int p= prime(a,2);
    if(p==0)
    {
        printf("%d is not a prime number.\n",a);
    }
    else
    {
        printf("%d is a prime number.\n",a);
    }
    return 0;
}

int prime(int a,int i)
{
    if(a==i)
    {
        return 1;
    }
    else if(a%i==0)
    {
        return 0;
    }
    else
    {
        return prime(a,i+1);
    }
}