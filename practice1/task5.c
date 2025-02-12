#include <stdio.h>
#include <math.h> //для abs, fabs - для double
int main() {
    double speed, factSpeed;

    printf("Enter to speed: \n");
    scanf("%lf", &speed);

    printf("Enter to facting speed: \n");
    scanf("%lf", &factSpeed);

    double difference = fabs(factSpeed - speed);
    // printf("%lf\n", speed);
    // printf("%lf\n", factSpeed);
    // printf("%lf", difference);

    if (difference <= 0.1) {
        printf("The speed is stable\n");
    } else {
        printf("The speed isn't stable\n");
    }
    return 0;
}