#include <stdio.h>

int main() {
    int weight;
    float weight_Moon;
    printf("enter the weight: \n");
    scanf("%d", &weight);
    weight_Moon = (float)weight / 6;
    printf("You weight will be %.2f on Moon", weight_Moon);
    return 0;
}