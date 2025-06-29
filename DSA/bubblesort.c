#include<stdio.h>

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int temp;
        for(int j=i;j<size;j++)
        {
            if(arr[i]>=arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    print(arr,size);
}

int main()
{
    int arr[]={8,3,5,2,9,1,4,0,7};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    sort(arr,size);
    return 0;
}