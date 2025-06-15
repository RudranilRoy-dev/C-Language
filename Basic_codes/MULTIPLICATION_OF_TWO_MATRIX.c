#include<stdio.h>

void input(int *ptr,int m,int n);
void print(int *ptr,int m,int n);
void multi(int *ptr,int *ptr1, int *ptr2, int a, int b,int c,int d);

int main()
{
    int a,b,c,d;
    printf("Enter the number of rows & coloums of 1st matrix:");
    scanf("%d %d",&a,&b);
    int matrix1[a][b];
    printf("Enter the number of rows & coloums of 2nd matrix:");
    scanf("%d %d",&c,&d);
    int matrix2[c][d],mult[b][c];
    printf("Enter the value of first matrix:\n");
    input(matrix1,a,b);
    printf("Enter the value of second matrix:\n");
    input(matrix2,c,d);
    printf("First Matrix:\n");
    print(matrix1,a,b);
    printf("Second Matrix:\n");
    print(matrix2,c,d);
    multi(mult,matrix1,matrix2,a,b,c,d);
    printf("Multiplication of two Matrices:\n");
    print(mult,a,d);
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

void multi(int *ptr, int *ptr1, int *ptr2, int a, int b,int c,int d)
{
    int *x= ptr1;
    int *y= ptr2;
    if(b==c)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                ptr1=x;
                ptr1+=(i*b);
                ptr2=y;
                ptr2+=j;
                int sum = 0;
                for (int k = 0; k < b; k++)
                {
                    sum += (*ptr1) * (*ptr2);
                    ptr1++;
                    ptr2+=d;
                }
            *ptr= sum;
            ptr++;
            }
        }
    }
    else
    {
        printf("Multiplication is not possible.");
    }
}
