#include <stdio.h>

int main() {
    float speed, data;
    printf("Enter the speed: \n");
    scanf("%f", &speed);
    printf("Enter the size data: \n");
    scanf("%f", &data);

    printf("transmission data will be %.2f minutes", data*1024/speed/60);
    return 0;
}