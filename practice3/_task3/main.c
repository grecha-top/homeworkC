#include <stdio.h>
#include "ship.h"
int main() {
    int num;
    printf("Enter the action: \n 1. Level fuel \n 2. Distance to destination: \n :");
    scanf("%d", &num);
    if (num == 1) {
        check_fuel();
    } else if (num == 2) {
        float speed, time;
        printf("Enter to speed: ");
        scanf("%f", &speed);
        printf("Enter to time: ");
        scanf("%f", &time);
        calculate_distance(speed, time);
    } else {
        printf("Incorrect number for mode activity");
    }
}