#include<stdio.h>

void input(int *ptr)
{
  for(int i=1;i<=9;i++)
  {
    printf("Box [%d]",i);
    scanf("%d",&(*ptr));
    ptr++;
  }
}

void print(int *ptr)
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d\t",*ptr);
      ptr++;
    }
    printf("\n");
  }
}

void calculate(int *ptr)
{ 
  int determinant=0;
  for(int i=0;i<3;i++)
  {
    int x,y;
    if(i==0)
    {
     determinant+= (*ptr) * ((*(ptr+4)) * (*(ptr+8))-(*(ptr+7)) * (*(ptr+5)));
    }
    else if(i==1)
    {
     x= (*(ptr+2)) * (*(ptr+7));
     y= (*(ptr+5)) * (*(ptr+4));
     determinant-= (*ptr) * (x-y);
    }
    else
    {
     x= (*(ptr+1)) * (*(ptr+5));
     y= (*(ptr+4)) * (*(ptr+2));
     determinant+= (*ptr) *(x-y);
    }
    ptr++;
  }
  printf("Determinant is %d.\n",determinant);
}

int main()
{
    int arr[3][3];
    input(&arr[0][0]);
    print(&arr[0][0]);
    calculate(&arr[0][0]);
    return 0;
}