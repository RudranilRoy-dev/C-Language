#include <stdio.h>
#include <time.h>

// Structure to store birth date
struct Date {
    int day;
    int month;
    int year;
};

int leapyear(int a)
{
    if((a%4==0 && (a%100!=0||a%400==0)))
    {
        return 1;
    }
    else{
        return 0;
    }
}

void calculateage(struct Date birthdate,struct Date currendate,int *years,int *months,int *days)
{
    int monthdays
    if(birthdate.day>currendate.day)
    {


    }
}



int main() {
    struct Date birthDate, currentDate;
    int years, months, days;

    // Get the birth date input
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDate.day, &birthDate.month, &birthDate.year);

    // Get the curent date
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);

    // Calculate age
    calculateAge(birthDate, currentDate, &years, &months, &days);

    // Display the result
    printf("Your age is: %d years, %d months, and %d days.\n", years, months, days);

    return 0;
}
