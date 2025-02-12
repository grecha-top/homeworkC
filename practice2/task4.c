#include <stdio.h>

struct Employee {
    char name[40];
    char position[40];
    float salary;
};

int main() {
    int n;
    printf("Enter the количество employeers:\n");
    scanf("%d", &n);
    struct Employee employeers[n];
    for (int i=0; i < n; i++) {
        scanf("%s %s %f", &employeers[i].name, &employeers[i].position, &employeers[i].salary);
    }
    for (int i=0; i<n; i++) {
        printf("\nName: %s\n", employeers[i].name);
        printf("Position: %s\n", employeers[i].position);
        printf("Salary: %.2f\n", employeers[i].salary);
    }
    return 0;
}