#include <stdio.h>

//  Structure Definition
struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[3];   // Array of structure for 3 students

    //  Input Student Details
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%d", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }


    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].roll);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}
