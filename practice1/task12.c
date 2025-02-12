#include <stdio.h>

int main() {
    float corner;
    printf("Enter the corner: \n");
    scanf("%f", &corner);
    if (corner >= -180 && corner <= 180) {
        printf("Corner in the range\n");
    } else {
        printf("Corner not in the range\n");
    }
    return 0;
}