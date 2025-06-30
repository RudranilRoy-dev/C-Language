#include <stdio.h>

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    print(arr, size);
}

int main()
{
    int arr[] = {9, 7, 0, 8, 2, 1, 5, 4, 3};
    int size = sizeof(arr) / sizeof(size);
    print(arr, size);
    sort(arr, size);
    return 0;
}