#include<stdio.h>
void calculate(int *ptr);
int main()
{
    int arr[3][3],z;
    printf("Enter the vlue of matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Index [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    calculate(&arr[0][0]);
    return 0;
}
void calculate(int *ptr)
{
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(k< *ptr)
            {
                k= *ptr;
            }
            ptr++;
        }
    }
    printf("%d is the largest number.",k);
}
