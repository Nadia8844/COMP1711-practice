#include <stdio.h>
#include <string.h>

struct student {
    char name [200];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    printf("Enter student name:");
    scanf("%s", new_student.name);
    printf("Enter student ID:");
    scanf("%s", new_student.student_id);
    printf("Enter mark:");
    scanf("%d", &new_student.mark);


    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %d\n", new_student.mark);
    return 0;
}