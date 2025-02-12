#include <stdio.h>

int main() {
    int n;
    printf("Enter: \n");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("OK!\n");
    } else {
        printf("Not ok!!!\n");
    }
    return 0;
}