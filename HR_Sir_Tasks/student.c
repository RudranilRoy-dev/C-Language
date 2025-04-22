#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

void input(struct student *ptr)
{
    printf("Enter the Roll: ");
    scanf("%d",&ptr->roll);
    getchar();
    printf("Enter the Name: ");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    ptr->name[strcspn(ptr->name,"\n")]=0;
    printf("Enter the marks: ");
    scanf("%f",&ptr->marks);
    printf("\n");
}

void display(struct student s)
{
    printf("Roll: %d\nName: %s\nMarks: %.2f\n\n",s.roll,s.name,s.marks);
}

int main()
{
    struct student s[20];
    int studentCount=0;
    int choice;
    while(1)
    {
        printf("Enter 1: Input Student Details.\nEnter 2: Display Student Details.\nEnter 3: Exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                if (studentCount < 20) 
                {
                    input((s+studentCount));
                    studentCount++;
                } 
                else 
                {
                    printf("Maximum student limit reached.\n");
                }
                break;

            case 2:

                if (studentCount == 0) 
                {
                    printf("No students to display.\n");
                } 
                else 
                {
                    for(int i=0;i<studentCount;i++)
                    {
                        display(s[i]);
                    }
                }
                break;

            case 3:

                printf("Exiting the system.\n");
                return 0;

            default:
            
                printf("Invalid choice! Please try again.\n");
        }
    }
}