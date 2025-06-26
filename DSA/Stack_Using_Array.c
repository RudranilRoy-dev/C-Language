#include<stdio.h>
#define max 100
int stack[max];
int top=-1;

void print()
{
    if(top==-1)
    {
        return;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
           if(i==top)
           {
                printf("| %d\t| <- TOP\n",stack[i]);
           }
           else if(i==0)
           {
                printf("| %d\t|\n---------\n",stack[i]);
           }
           else
           {
                printf("| %d\t|\n",stack[i]);
           }
        }
    }
}

void push()
{
    if(top==100)
    {
        printf("Stsck is full.\n");
    }
    else
    {
        int value;
        printf("Enter the value for push: ");
        scanf("%d",&value);
        stack[top+1]=value;
        top++;
        printf("Value Pushed Succesfully.\n");
        print();
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("%d Popped Succesfully.\n",stack[top]);
        top--;
        print();
    }
    
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("TOP -> %d\n",stack[top]);
    }
    
}

void search()
{
    int find,occurrence=0;
    printf("Enter the value: ");
    scanf("%d",&find);
    if(top==-1)
    {
        printf("Stack is empty.");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            if(find==stack[i])
            {
                printf("Value found at index %d.\n",i);
                occurrence++;
            }
        }
        if(occurrence==0)
        {
            printf("Value not found.\n");
        }
        printf("Occurrence of %d is %d.\n",find,occurrence);
    }
}

int main()
{
    int size;
    printf("Enter the size of stack (max=100): ");
    scanf("%d",&size);
    printf("Enter data: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&stack[i]);
        top++;
    }
    print();
    while(1)
    {
        int choice;
        printf("\n__OPERATIONS__\n0.Print\n1.Push\n2.Pop\n3.Peek\n4.Search And Occurrence\n5.Exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            print();
            break;
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            search();
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid Choice. Please try again.");
            break;
        }
    }    
}