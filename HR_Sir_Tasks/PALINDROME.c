#include<stdio.h>

int main()
{
    int n,j,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=n;
    while(i>0)
    {
        j=i%10;
        sum=(sum*10)+j;
        i=i/10;
    }
    if(sum==n)
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is not a palindrome number.",n);
    }
}