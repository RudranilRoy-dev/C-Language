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
}