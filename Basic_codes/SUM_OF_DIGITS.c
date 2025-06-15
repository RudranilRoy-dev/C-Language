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
        sum=sum+j;
        i=i/10;
    }
    printf("Sum of Digits of %d is %d.",n,sum);
}
