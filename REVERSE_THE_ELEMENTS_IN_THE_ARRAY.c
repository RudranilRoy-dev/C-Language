#include<stdio.h>

void input(int *ptr, int n)
{
  for(int i=1;i<=n;i++)
  {
    printf("Enter element %d: ",i);
    scanf("%d",&(*ptr));
    ptr++;
  }
}

void print( int *ptr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\n");
}

void calculate(int *ptr, int n)
{ 
  int swap;
  for(int i=0;i<(n/2);i++)
  {
    swap= *(ptr+i);
    *(ptr+i)=*(ptr+n-1-i);
    *(ptr+n-1-i)=swap;
  }
}

int main()
{
    int n;
    printf("Number of elements: ");
    scanf("%d",&n);
    int arr[n];
    input(&arr[0],n);
    print(&arr[0],n);
    calculate(&arr[0],n);
    printf("Modified Array:\n");
    print(&arr[0],n);
    return 0;
}