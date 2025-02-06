#include<stdio.h>

void input(int *ptr,int m,int n);
void print(int *ptr,int m,int n);
void add(int *ptr1, int *ptr2, int m, int n);

int main()
{
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of coloums: ");
    scanf("%d",&n);
    int matrix1[m][n], matrix2[m][n];
    printf("Enter the value of first matrix:\n");
    input(&matrix1[0][0],m,n);
    printf("Enter the value of second matrix:\n");
    input(&matrix2[0][0],m,n);
    printf("First Matrix:\n");
    print(&matrix1[0][0],m,n);
    printf("Second Matrix:\n");
    print(&matrix2[0][0],m,n);
    add(&matrix1[0][0],&matrix2[0][0],m,n);
    printf("Sum of two Matrices:\n");
    print(&matrix1[0][0],m,n);
    return 0;
}

void input(int *ptr,int m,int n)
{
    for(int i=1;i<=(m*n);i++)
    {
        printf("Box [%d]:",i);
        scanf("%d",&(*ptr));
        ptr++;  
    }
}

void print(int *ptr, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",*ptr);
            ptr++;
        }
        printf("\n");
    }
}

void add(int *ptr1, int *ptr2, int m, int n)
{
    for(int i=1;i<=(m*n);i++)
    {
        *ptr1 = *ptr1 + *ptr2;
        ptr1++;ptr2++;
    }
}