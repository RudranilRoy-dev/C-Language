#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int element = 51;
    int index = binarysearch(arr, size, element);
    if (index != (-1))
    {
        printf("%d is found at index %d.\n", element, index);
    }
    else
    {
        printf("%d is NOT found.\n", element);
    }
    return 0;
}