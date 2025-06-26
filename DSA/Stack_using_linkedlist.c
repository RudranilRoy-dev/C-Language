#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void createnode(int size)
{
    struct node *temp = NULL;
    printf("Enter data: ");
    for (int i = 0; i < size; i++)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &ptr->data);
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
            temp = ptr;
        }
        else
        {
            temp->next = ptr;
            temp = ptr;
        }
    }
}

void print()
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        struct node *temp = head;
        printf("TOP -> ");
        while (temp != NULL)
        {
            printf("%d ->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}

void push()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for push: ");
    scanf("%d", &ptr->data);
    ptr->next = head;
    head = ptr;
    print();
}

void pop()
{
    if (head == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        printf("%d popped.\n", temp->data);
        free(temp);
        print();
    }
}

void peek()
{
    if (head == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("TOP -> %d\n", head->data);
    }
}

int main()
{
    int size;
    printf("Enter the size of stack: ");
    scanf("%d", &size);
    createnode(size);
    print();
    while (1)
    {
        int choice;
        printf("\n__OPERATIONS__\n1.Pop\n2.Push\n3.Peek\n4.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            pop();
            break;
        case 2:
            push();
            break;
        case 3:
            peek();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid option. Please try again.");
            break;
        }
    }
}