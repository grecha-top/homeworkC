#include <stdio.h>

int main() {
    int temperature;
    printf("Enter the temperature : \n");
    scanf("%d", &temperature);
    if (temperature > -150 && temperature < 120) {
        printf("Temperature is ok!\n");
    } else {
        printf("Temperature is not ok!\n");
    }
    return 0;
}