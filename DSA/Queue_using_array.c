#include <stdio.h>
#define max 100

int queue[max];
int front = -1, rear = -1;

void print()
{
    if (front == -1 || rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Rear->");
        for (int i = 0; i <= front; i++)
        {
            printf("%d->", queue[i]);
        }
        printf("Front\n");
    }
}

void enqueue()
{
    if (rear == 100)
    {
        printf("Queue is Full.\n");
    }
    int data;
    printf("Enter data for enqueue: ");
    scanf("%d", &data);
    if (front == -1)
    {
        front++;
        rear++;
        queue[rear] = data;
    }
    else
    {
        front++;
        int temp;
        for (int i = front; i >= 0; i--)
        {
            temp = queue[i + 1];
            queue[i + 1] = queue[i];
            queue[i] = temp;
        }
        queue[rear] = data;
    }
    print();
}

void dequeue()
{
    if (front == -1 || rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("%d Dequeued.\n", queue[front]);
        front--;
        print();
    }
}

void frontandrear()
{
    if (front == -1 || rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Front = %d\n", queue[front]);
        printf("Rear = %d\n", queue[rear]);
    }
}

int main()
{
    while (1)
    {
        int choice;
        printf("\n__OPERATIONS__\n1.Enqueue\n2.Dequeue\n3.Front and Rear\n4.Exit\nEnter Your Choice: ");
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
            frontandrear();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}