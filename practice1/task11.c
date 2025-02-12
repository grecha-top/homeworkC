#include <stdio.h>

int main() {
    float full_oxygen, currently_oxygen, min_level_oxygen;
    printf("Enter the full amount of oxygen: \n");
    scanf("%d", &full_oxygen);
    printf("Enter the currently amount of oxygen: \n");
    scanf("%d", &currently_oxygen);
    min_level_oxygen = full_oxygen * 0.15;
    if (currently_oxygen < min_level_oxygen) {
        printf("Emergecy mode is enable!! \n");
    } else {
        printf("Oxygen level is OK!\n");
    }
}