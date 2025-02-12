#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);
    if (weight >= 60 && weight <= 90) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}