#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node 
struct Node* createNode(int n) 
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

// Insertion at First
struct Node *IAF(struct Node *head)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data of newnode: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}

// Insertion at End
struct Node* IAE(struct Node *head)
{
    struct Node* ptr=head;
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data of newnode: ");
    scanf("%d",&newnode->data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=NULL;
    return head;
}

// Insertion at Index
struct Node* IAI(struct Node* head,int index)
{
    struct Node* ptr=head;
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data of newnode: ");
    scanf("%d",&newnode->data);
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    return head;
}

// Function to print the LinkedList
void print(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int n;
    printf("How many nodes are you want: ");
    scanf("%d",&n);
    struct Node* head = createNode(n);
    print(head);
    head=IAF(head);
    print(head);
    head=IAE(head);
    print(head);
    int index;
    printf("Enter the Index: ");
    scanf("%d",&index);
    head=IAI(head,index);
    print(head);
}