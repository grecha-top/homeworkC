#include <stdio.h>

struct Vehicle {
    char marka[40];
    char model[40];
    int release_year;
    char type_engine[50];
};

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    struct Vehicle transports[n];
    for (int i=0; i<n; i++) {
        scanf("%s %s %d %s", &transports[i].marka, &transports[i].model, &transports[i].release_year, &transports[i].type_engine);
    }
    for (int i=0; i<n; i++) {
        printf("\nVehicle: %s %s\n", transports[i].marka, transports[i].model);
        printf("Year: %d\n", transports[i].release_year);
        printf("Engine Type: %s\n", transports[i].type_engine);
    }
    return 0;
}