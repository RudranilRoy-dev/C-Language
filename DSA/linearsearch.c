#include <stdio.h>

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 32, 43, 12, 11, 23, 123, 14, 111};
    int size = sizeof(arr) / sizeof(int);
    int element = 4;
    int index = linearsearch(arr, size, element);
    if (index != (-1))
    {
        printf("%d found at index %d.\n", element, index);
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}