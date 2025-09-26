#include <stdio.h>
#include <string.h>

struct students
{
    char name[20];
    int rollNum;
    float marks;
};


int main()
{
   struct students s;
   printf("Enter enformation of students\n");

   printf("Enter student name: "); gets(s.name);
   printf("Enter student roll number: ");scanf("%d", &s.rollNum);
   printf("Enter student marks: ");scanf("%f", &s.marks);
    
   printf("\nDisplaying Information\n");

   printf("name: %s\n", s.name);
   printf("roll: %d\n", s.rollNum);
   printf("marks: %.2f", s.marks);

}