#include<stdio.h>
#include<string.h>

struct book
{
    char title[100];
    char author[100];
    float price;
};

void input(struct book *number,int n);
void max(struct book number[],int n);

int main()
{
    int n;
    printf("Enter the number of Books: ");
    scanf("%d",&n);
    printf("\n");
    struct book number[n];
    input(number,n);
    max(number,n);
    return 0;
}

void input(struct book *number,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the Details of Book %d:\n",i+1);
        printf("Title: ");
        getchar();
        fgets(number[i].title,sizeof(number[i].title),stdin);
        number[i].title[strcspn(number[i].title, "\n")] = 0;
        
        printf("Author: "); 
        fgets(number[i].author,sizeof(number[i].author),stdin);
        number[i].author[strcspn(number[i].author, "\n")] = 0;
        
        printf("Price: ");
        scanf("%f",&number[i].price);
        printf("\n");
    }
}

void max(struct book number[],int n)
{
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(m<number[i].price)
        {
            m=number[i].price;
        }
    }
    printf("THE MOST EXPENSIVE BOOK(s) IS:\n");
    for(int i=0;i<n;i++)
    {
        if(m==number[i].price)
        {
            printf("Title:\t%s\n",number[i].title);
            printf("Author:\t%s\n",number[i].author);
            printf("Price:\t%.2f\n\n",number[i].price);
        }
    }
}