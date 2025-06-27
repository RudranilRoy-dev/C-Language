#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

void print()
{
    if (rear == NULL || front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct node *temp = rear;
        printf("rear->");
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("front\n");
    }
}

void enqueue()
{
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    if (rear == NULL || front == NULL)
    {
        rear = ptr;
        front = ptr;
    }
    else
    {
        ptr->next=rear;
        rear=ptr;
    }
    print();
}

void dequeue()
{
    if (rear == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    if (rear == front)
    {
        free(rear);
        rear = NULL;
        front = NULL;
    }
    else
    {
        struct node *current = rear;
        while (current->next != front)
        {
            current = current->next;
        }
        free(front);
        front = current;
        front->next = NULL;
    }
    print();
}


void rearandfront()
{
    if (rear == NULL || front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("rear = %d\n", rear->data);
        printf("front = %d\n", front->data);
    }
}

int main()
{
    while (1)
    {
        int choice;
        printf("\n__OPERATIONS__\n1.Enqueue\n2.Dequeue\n3.rear and front\n4.Exit\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            rearandfront();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}