#include<stdio.h>

void input(int *ptr);
int max(int *ptr);
void min(int *ptr,int n);
void print(int *ptr);
void ace(int *ptr);

int main()
{
    int arr[5];
    input(&arr[0]);
    int n= max(&arr[0]);
    min(&arr[0],n);
    ace(&arr[0]);
    print(&arr[0]);
    return 0;
}

void input(int *ptr)
{
    printf("Enter 5 random positive integers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&*(ptr+i));
    }
}

void print(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

int max(int *ptr)
{
    int m=0;
    for(int i=0;i<5;i++)
    {
        if(m<*ptr)
        {
            m=*ptr;
        }
        ptr++;
    }
   printf("Maximum number in this array is: %d\n",m);
   return m;
}

void min(int *ptr, int n)
{
    int m=n;
    for(int i=0;i<5;i++)
    {
        if(m>*ptr)
        {
            m=*ptr;
        }
        ptr++;
    }
   printf("Minimum number in this array is: %d\n",m);
}

void ace(int *ptr)
{ 
  int swap;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
        if(*ptr>*(ptr+1))
        {
            swap= *(ptr+j);
            *(ptr+j)=*(ptr+1+j);
            *(ptr+1+j)=swap;
        }
        else
        {
            ptr++;
        }
    }
  }
}
