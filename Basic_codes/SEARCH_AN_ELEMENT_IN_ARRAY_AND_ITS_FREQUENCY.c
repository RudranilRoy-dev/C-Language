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

void calculate(int *ptr, int n, int m)
{ 
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(*ptr==m)
    {
        count++;
    }
    ptr++;
  }
  if(count==0)
  {
      printf("Element is not present.");
  }
  else 
  {
      printf("Element is present & its frequency is %d.",count);
  }
}

int main()
{
    int n,m;
    printf("Number of elements: ");
    scanf("%d",&n);
    int arr[n];
    input(&arr[0],n);
    printf("Enter the searching element: ");
    scanf("%d",&m);
    calculate(&arr[0],n,m);
    return 0;
}
