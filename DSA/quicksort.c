#include <stdio.h>

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *arr,int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int *arr, int low, int high)
{
    int pivot=arr[low];
    int start=low;
    int end=high;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(arr,start,end);
        }
    }
    swap(arr,low,end);
    return end;
}

void sort(int *arr,int low,int high)
{
    if(low<high)
    {
        int index=partition(arr,low,high);
        sort(arr,low,index-1);
        sort(arr,index+1,high);
    }
}

int main()
{
    int arr[]={9,5,6,3,2,7,8,0};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    sort(arr,0,size-1);
    print(arr,size);
    return 0;
}