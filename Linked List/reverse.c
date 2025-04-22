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

struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;  // Step 1: Store the next node
        current->next = prev;  // Step 2: Reverse the link
        prev = current;        // Step 3: Move prev one step ahead
        current = next;        // Step 4: Move current one step ahead
    }
    
    return prev;  // New head of the reversed list
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