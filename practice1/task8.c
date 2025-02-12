#include <stdio.h>

int main() {
    int n;
    printf("Enter to weight: \n");
    scanf("%d", &n);

    if (n%4 == 0) {
        printf("Yes! Each otsek will contain %d kg!\n", n/4);
    } else {
        printf("NO!!!\n");
    }
    return 0;
}