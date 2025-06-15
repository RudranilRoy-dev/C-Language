#include<stdio.h>

void calculate(int *ptr);
void print(int *ptr);
void input(int *ptr);

int main()
{
    int arr[3][3];
    input(&arr[0][0]);
    print(&arr[0][0]);
    calculate(&arr[0][0]);
    return 0;
}

void input(int *ptr)
{
    printf("Enter the vlue of matrix:\n");
    for(int i=1;i<=9;i++)
    {
        printf("Box [%d]:",i);
        scanf("%d",&(*ptr));
        ptr++;  
    }
}

void calculate(int *ptr)
{
    int pri_sum=0,sec_sum=0;
   for(int i=0;i<3;i++)
   {
        pri_sum+=*ptr;
        ptr+=4;
   } 
   printf("Sum of Primary Diagonal is: %d\n",pri_sum);
   ptr-=4;
   for(int i=0;i<3;i++)
   {
        ptr-=2;
        sec_sum+=*ptr;
   } 
   printf("Sum of Secondary Diagonal is: %d\n",sec_sum);
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
