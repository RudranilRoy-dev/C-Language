#include<stdio.h>

void input(int *ptr);
void print(int *ptr);
void transpose(int arr1[3][3],int arr2[3][3]);

int main()
{
    int arr1[3][3],arr2[3][3];
    input(&arr1[0][0]); 
    transpose(arr1,arr2);
    return 0;
}

void input(int *ptr)
{
    printf("Enter the value of the matrix:\n");
    for(int i=0;i<9;i++)
    {
        printf("box %d: ",i+1);
        scanf("%d",&*(ptr+i));
    }
    printf("\n");
}

void print(int *ptr)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*ptr);
            ptr++;
        }
        printf("\n");
    }
}

void transpose(int arr1[3][3],int arr2[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr2[j][i]=arr1[i][j];
        } 
    }
    printf("Original Matrix:\n");
    print(&arr1[0][0]);
    printf("Transpose Matrix:\n");
    print(&arr2[0][0]);
}
