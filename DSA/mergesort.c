#include <stdio.h>

void print(int arr[], int size);
void mergesort(int arr[], int low, int high);
void merge(int arr[], int high, int low, int mid);

int main()
{
    int arr[] = {8, 3, 1, 5, 8, 9, 6, 4, 2, 7};
    printf("Unsorted Array: ");
    print(arr, (sizeof(arr) / sizeof(int)));
    mergesort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
    printf("Sorted Array: ");
    print(arr, (sizeof(arr) / sizeof(int)));
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int newarr[100];
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            newarr[k] = arr[i];
            i++;
        }
        else
        {
            newarr[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        newarr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        newarr[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = newarr[i];
    }
}