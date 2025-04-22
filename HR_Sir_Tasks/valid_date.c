#include<stdio.h>

struct Date
{
    int day,month,year;
};

int check(struct Date date);
int leapyear(struct Date date);

void main()
{
    struct Date date;
    printf("Enter the day month year: ");
    scanf("%d %d %d",&date.day,&date.month,&date.year);
    int count= check(date);
    if(count==1)
    {
        printf("%d.%d.%d is a valid date.",date.day,date.month,date.year);
    }
    else
    {
        printf("%d.%d.%d is a wrong date.",date.day,date.month,date.year);
    }
}

int leapyear(struct Date date)
{
    if((date.year%100!=0 && date.year%4==0) || date.year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check(struct Date date)
{
    int arr[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    int lp= leapyear(date);
    if(date.month<1 || date.month>12)
    {
        return 0;
    }
    else if(date.day>arr[lp][date.month-1] || date.day<1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}