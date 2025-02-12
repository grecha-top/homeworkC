#include <stdio.h>

int main() {
    int date;
    int dateNow = 20250210;
    scanf("%d", &date);
    if (date > dateNow) {
        printf("Start mission in future\n");
    } else if (date == dateNow) {
        printf("mission starts today\n");
    } else {
        printf("Mission started\n");
    }
    return 0;
}