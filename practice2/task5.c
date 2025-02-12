#include <stdio.h>

union Data {
    int num;
    float num1;
    char eee[50];
};

int main() {
    int n;
    union Data data;
    printf("Enter the num(1, 2 or 3): ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Enter the value: ");
        scanf("%d", &data.num);
        printf("Integer: %d\n", data.num);
    } else if (n == 2) {
        printf("Enter the value: ");
        scanf("%f", &data.num1);
        printf("Float: %.2f\n", data.num1);
    } else if (n == 3) {
        printf("Enter the value: ");
        scanf("%s", &data.eee);
        printf("String: %s\n", data.eee);
    }
    return 0;
}