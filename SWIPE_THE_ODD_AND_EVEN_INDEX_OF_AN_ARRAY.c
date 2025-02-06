#include<stdio.h>

void input(int *ptr);
void swap(int *ptr1,int *ptr2,int size);
void print(int *ptr,int size);

int main()
{
    int arr[10];
    printf("Enter 10 integers:");
    input(&arr[0]);         
    int size=sizeof(arr)/sizeof(int);
    printf("original array:");
    print(&arr[0],size);
    swap(&arr[0],&arr[1],size);
    printf("modified array:");
    print(&arr[0],size);
    return 0;
}

void input(int *ptr)
{
   for(int i=0;i<10;i++)
    {
        scanf("%d",&(*(ptr+i)));
    } 
}

void swap(int *ptr1,int *ptr2,int size)
{
   for(int i=0;i<(size/2);i++)
   {
        int change= *ptr1;
        *ptr1= *ptr2;
        *ptr2=change;
        ptr1+=2,ptr2+=2;
   }
}

void print(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",*(ptr+i));
    }
    printf("\n");
}