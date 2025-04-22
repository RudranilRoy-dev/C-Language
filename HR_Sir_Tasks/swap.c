#include<stdio.h>

struct swap
{
    int a;
    int b;
};

int main()
{
    struct swap c;
    int change;
    printf("Enter the 1st Number: ");
    scanf("%d",&c.a);
    printf("Enter the 2nd Number: ");
    scanf("%d",&c.b);
    printf("Original Value\na = %d, b = %d\n",c.a,c.b);
    change=c.a;
    c.a=c.b;
    c.b=change;
    printf("Swaped Value\na = %d, b = %d\n",c.a,c.b);
}