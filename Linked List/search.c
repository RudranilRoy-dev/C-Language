#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *create(int n)
{
    struct Node *head=NULL,*ptr=NULL,*newnode=NULL;
    for(int i=1;i<=n;i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Data for node %d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            ptr->next=newnode;
        }
        ptr=newnode;
    }
    return head;
}

void search(struct Node *head,int element)
{
    int position=0;
    struct Node* ptr=head;
   while(ptr!=NULL)
   {
    if(ptr->data==element)
    {
        printf("Element %d present at index %d.\n",ptr->data,position);
        break;
    }
    else
    {
        ptr=ptr->next;
        position++;
    }
   }
}

void print(struct Node *head)
{
    struct Node *ptr=head;
    printf("Linked List: ");
    while(ptr!=NULL)
    {
        printf(" %d ->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head;
    int n,element;
    printf("Enter Number of Nodes: ");
    scanf("%d",&n);
    head=create(n);
    printf("Enter the Element to search: ");
    scanf("%d",&element);
    search(head,element);
    print(head);
    return 0;
}