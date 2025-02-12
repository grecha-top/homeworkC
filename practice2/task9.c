#include <stdio.h>

struct Weather {
    float temperature;
    float humidity;
    char condition[50];
};

int main() {
    struct Weather weather;
    scanf("%f %f %s", &weather.temperature, &weather.humidity, &weather.condition);
    printf("Temperature: %.2f°C\n", weather.temperature);
    printf("Humidity: %.2f%%\n", weather.humidity);
    printf("Condition: %s\n", weather.condition);
    return 0;
}