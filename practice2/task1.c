#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float gpa;
};
int main() {
    int amount_students;
    printf("Enter the количество students: \n");
    scanf("%d", &amount_students);
    struct Student arr_student[amount_students];
    for (int i = 0; i < amount_students; i++ ) {
        scanf("%s %d %f", &arr_student[i].name, &arr_student[i].age, &arr_student[i].gpa);
    }

    for (int i = 0; i < amount_students;i++ ) {
        printf("Name: %s\n", arr_student[i].name);
        printf("Age: %d\n", arr_student[i].age);
        printf("GPA: %f\n", arr_student[i].gpa);
        printf("\n");
    }
    return 0;
}