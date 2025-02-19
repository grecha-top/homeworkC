#include <stdio.h>

int check_fuel() {
    float full_oxygen, currently_oxygen, min_level_oxygen;
    printf("Enter the full amount of fuel: \n");
    scanf("%d", &full_oxygen);
    printf("Enter the currently amount of fuel: \n");
    scanf("%d", &currently_oxygen);
    min_level_oxygen = full_oxygen * 0.1;
    if (currently_oxygen < min_level_oxygen) {
        printf("Fuel level is not OK!! \n");
    } else {
        printf("Fuel level is OK!\n");
    }
}