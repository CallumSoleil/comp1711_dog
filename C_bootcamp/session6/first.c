#include <stdio.h>
struct student {
    char name [20];
    char student_id [10]; 
    unsigned mark;
};
int main () {
    struct student new_student;
    /*printf("Mark? ");
    scanf("%u", &new_student.mark);
    printf("Name? ");
    scanf("%s", new_student.name);
    printf("ID? ");
    scanf("%s", new_student.student_id);
    */
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);
    return 0;
}