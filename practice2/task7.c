#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[20];
    int age;
    float gpa;
};

int main() {
    int n;
    printf("Enter the количество students: ");
    scanf("%d", &n);
    struct Student *students = (struct Student*)malloc(sizeof(n));
    for (int i=0; i<n; i++) {
        scanf("%s %d %f", &students[i].name, &students[i].age, &students[i].gpa);
    }
    for (int i=0; i<n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %f\n", students[i].gpa);
    }
    free(students);
    return 0;
}

//не очень поняла, где использовать указатели, поэтому не использовала их