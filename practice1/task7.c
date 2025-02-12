#include <stdio.h>

int main() {
    printf("Enter to chastota: \n");
    float num;
    scanf("%f", &num);
    if (num <= 3.5 && num >= 2.5) {
        printf("Stable\n");
    } else {
        printf("Not stable(\n");
    }
    return 0;
}