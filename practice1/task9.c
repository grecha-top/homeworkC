#include <stdio.h>
#include <math.h>
//для linux компилировать командой gcc -o task9 -lm task9.c, чтобы floor работал!!!
int main() {
    double time;
    printf("Enter the time to location: \n");
    scanf("%lf", &time);
    double minutes, seconds;
    minutes = time / 60;
    seconds = time - floor(minutes)*60;
    printf("The time will be %.f minutes and %.2f seconds\n", minutes, seconds);
    return 0;
}