#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of two integers: ");
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d, b=%d.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: a=%d, b=%d.\n",a,b);
    return 0;
}
