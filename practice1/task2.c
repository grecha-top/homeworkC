#include <stdio.h>

int main() {
    printf("Enter to distance: ");
    int distance;
    scanf("%d", &distance);
    if (distance > 500) {
        printf("NO! Stantion needs to power\n");
    } else {
        printf("Ok!\n");
    }
    return 0;
}