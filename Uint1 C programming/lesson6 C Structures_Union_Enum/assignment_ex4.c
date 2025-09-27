#include <stdio.h>

struct students
{
    char name[20];
    float marks;
};

int main()
{
    struct students data[10];

    printf("Enter information of students\n");
    for(int i = 0; i < 10; i++)
    {
        printf("for roll number %d\n", i+1);
        printf("Enter name: "); scanf("%s", data[i].name);
        printf("Enter marks: "); scanf("%f", &data[i].marks);
        printf("\n");
    }

    printf("Displaying information of students:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("for roll number %d\n", i+1);
        printf("name: %s\n", data[i].name);
        printf("marks: %.1f\n", data[i].marks);
        printf("\n");
    }
}

