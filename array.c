#include<stdio.h>

void input(int *arr,int size)
{
    printf("Enter the values: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print(int *arr,int size)
{
    printf("\nData: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert_at_first(int *arr,int size)
{
    int data;
    int temp;
    printf("\nEnter the data for Insert: ");
    scanf("%d",&data);
    for(int i=size;i>=0;i--)
    {
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    arr[0]=data;
    printf("\nInsertion at first is done.");
}

void insert_at_last(int *arr,int size)
{
    int data;
    printf("\nEnter the data for Insert: ");
    scanf("%d",&data);
    arr[size]=data;
    printf("\nInsertion at last is done.");
}

void insert_at_index(int *arr,int size)
{
    int data,index,temp;
    printf("Enter the index: ");
    scanf("%d",&index);
    if(size>index)
    {
        printf("\nEnter the data for Insert: ");
        scanf("%d",&data);
        for(int i=size;i>=index;i--)
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        arr[index]=data;
        printf("\nInsertion at %d index is done.",index);
    }
    else
    {
        printf("Please enter a correct index otherwise Insertion is not possible.");
    }
}

void insertion(int *arr,int *size)
{
    int i=1;
    while(i)
    {
        if(*size<100)
        {
            int choice;
            printf("\n__Insertion__");
            printf("\n1. Insert at first");
            printf("\n2. Insert at last");
            printf("\n3. Insert at Index");
            printf("\n4. Exit");
            printf("\nEnter your choice: ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:insert_at_first(arr,*size);
                    break;
            case 2:insert_at_last(arr,*size);
                    break;  
            case 3:insert_at_index(arr,*size);
                    break;
            case 4:i=0,*size=*size-1;
                    break;
            default:printf("\nPlease enter a valid number."),*size=*size-1;
                    break;
            }
            *size=*size+1;
            print(arr,*size);
        }
        else
        {
            printf("Array is full, insertion is not possible.\n");
        }

    }
}

void delete_at_first(int *arr,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Deletion at first is done.");
}

void delete_at_last(int *arr,int size)
{
    printf("Deletion at Last is done.");
}

void delete_at_index(int *arr,int size)
{
    int index,temp;
    printf("Enter the index: ");
    scanf("%d",&index);
    if(size>index)
    {
        for(int i=index;i<size;i++)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        printf("Deletion at %d index is done.",index);
    }
    else
    {
        printf("Please enter a correct index otherwise deletion is not possible.");
    }
}

void deletion(int *arr,int *size)
{
    int i=1;
    while(i)
    {
        if(*size>0)
        {
            int choice;
            printf("\n__Deletion__");
            printf("\n1. Delete at first");
            printf("\n2. Delete at last");
            printf("\n3. Delete at Index");
            printf("\n4. Exit");
            printf("\nEnter your choice: ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:delete_at_first(arr,*size);
                    break;
            case 2:delete_at_last(arr,*size);
                    break;  
            case 3:delete_at_index(arr,*size);
                    break;
            case 4:i=0,*size=*size+1;
                    break;
            default:printf("\nPlease enter a valid number."),*size=*size+1;
                    break;
            }
            *size=*size-1;
            print(arr,*size);
        }
        else
        {
            printf("Array is empty, Deletion is not possible.\n");
        }
    }

}

void reverse(int *arr,int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    print(arr,size);
}

void searchAndOccurrence(int *arr,int size)
{
    int element,occurrence=0;
    printf("Enter the element for search: ");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(element==arr[i])
        {
            printf("Element found at index %d.\n",i);
            occurrence++;
        }
    }
    if(occurrence==0)
    {
        printf("Element is not present.\nOccurrence of the element is 0.\n");
    }
    else
    {
        printf("Occurrence of the element is %d.\n",occurrence);
    }
}

int main()
{
    int size,arr[100];
    printf("Enter the size of array (max=100): ");
    scanf("%d",&size);
    input(arr,size);
    print(arr,size);
    while(1)
    {
        int choice;
        printf("\n__OPERATIONS__");
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Revserse");
        printf("\n4. Search and Occurrence");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insertion(arr,&size); 
               break;
        case 2:deletion(arr,&size);
                break;
        case 3:reverse(arr,size);
                break;
        case 4:searchAndOccurrence(arr,size);
                break;
        case 5: return 0;
                break;
        default:printf("Please Enter a valid number.\n");
            break;
        }
    }

}