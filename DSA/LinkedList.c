#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createlist(int size)
{
    struct node *head = NULL;
    struct node *temp = NULL;
    for (int i = 0; i < size; i++)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d:", i + 1);
        scanf("%d", &ptr->data);
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
            temp = head;
        }
        else
        {
            temp->next = ptr;
            temp = temp->next;
        }
    }
    return head;
}

void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct node *insert_at_first(struct node *head, int *size)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for Insert: ");
    scanf("%d", &ptr->data);
    ptr->next = head;
    head = ptr;
    *size += 1;
    return head;
}
struct node *insert_at_last(struct node *head, int *size)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for Insert: ");
    scanf("%d", &ptr->data);
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
    *size += 1;
    return head;
}
struct node *insert_at_index(struct node *head, int *size)
{
    int index;
    printf("Enter the index: ");
    scanf("%d", &index);

    if (index < 0 || index > *size)
    {
        printf("\nInvalid index. Allowed range: 1 to %d.\n", *size - 1);
        return head;
    }
    if (index == 0)
    {
        printf("\nUse 'Insert at First' option for index 0.\n");
        return head;
    }
    if (index == *size)
    {
        printf("\nUse 'Insert at Last' option for index %d.\n", *size);
        return head;
    }

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for Insert at index %d: ", index);
    scanf("%d", &ptr->data);

    struct node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    (*size)++;
    return head;
}
struct node *insertion(struct node *head, int *size)
{
    int i = 1;
    while (i)
    {
        int choice;
        printf("\n__Insertion__");
        printf("\n1. Insert at first");
        printf("\n2. Insert at last");
        printf("\n3. Insert at Index");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert_at_first(head, size);
            break;
        case 2:
            head = insert_at_last(head, size);
            break;
        case 3:
            head = insert_at_index(head, size);
            break;
        case 4:
            i = 0;
            break;
        default:
            printf("\nPlease enter a valid number.\n");
            break;
        }
        print(head);
    }
    return head;
}

struct node *delete_at_first(struct node *head, int *size)
{
    struct node *temp = head;
    head = temp->next;
    free(temp);
    (*size)--;
    return head;
}
struct node *delete_at_last(struct node *head, int *size)
{
    struct node *temp = head;
    struct node *ptr = temp->next;
    while (ptr->next != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    temp->next = NULL;
    free(ptr);
    (*size)--;
    return head;
}
struct node *delete_at_index(struct node *head, int *size)
{
    int index;
    printf("Enter the index: ");
    scanf("%d", &index);
    struct node *temp = head;
    struct node *ptr = temp->next;
    if (index < 0 || index > *size)
    {
        printf("\nInvalid index. Allowed range: 1 to %d.\n", *size - 1);
        return head;
    }
    if (index == 0)
    {
        printf("\nUse 'Delete at First' option for index 0.\n");
        return head;
    }
    if (index == *size)
    {
        printf("\nUse 'Delete at Last' option for index %d.\n", *size);
        return head;
    }
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    free(ptr);
    (*size)--;
    return head;
}
struct node *deletion(struct node *head, int *size)
{
    int i = 1;
    while (i)
    {
        int choice;
        printf("\n__Deletion__");
        printf("\n1. Delete at first");
        printf("\n2. Delete at last");
        printf("\n3. Delete at Index");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = delete_at_first(head, size);
            break;
        case 2:
            head = delete_at_last(head, size);
            break;
        case 3:
            head = delete_at_index(head, size);
            break;
        case 4:
            i = 0;
            break;
        default:
            printf("\nPlease enter a valid number.\n");
            break;
        }
        print(head);
    }
    return head;
}

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printf("\nList Reversed.\n");
    print(head);
    return head;
}

void SearchAndOccurrence(struct node *head)
{
    int search, occurrence = 0, i = 0;
    struct node *temp = head;
    printf("Enter the integer for search: ");
    scanf("%d", &search);
    while (temp != NULL)
    {
        if (search == temp->data)
        {
            printf("\nInteger found at index %d.", i);
            occurrence++;
        }
        i++;
        temp = temp->next;
    }
    if (occurrence == 0)
    {
        printf("\nInteger is not present in list.");
    }
    printf("\nOccurrence of %d is %d.\n", search, occurrence);
    print(head);
}

int main()
{
    int size;
    printf("Enter the size of linked list: ");
    scanf("%d", &size);
    struct node *head = createlist(size);
    print(head);
    while (1)
    {
        int choice;
        printf("\n__OPERATIONS__\n1.Insertion\n2.Deletion\n3.Reverse\n4.Search and Occurrence\n5.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertion(head, &size);
            break;
        case 2:
            head = deletion(head, &size);
            break;
        case 3:
            head = reverse(head);
            break;
        case 4:
            SearchAndOccurrence(head);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("please enter a valid number");
            break;
        }
    }
}
