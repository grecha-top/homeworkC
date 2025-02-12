#include <stdio.h>

struct Event {
    char event[50];
    int date[3];
    char description[50];
};

int main() {
    int n;
    printf("Enter to количество events: \n");
    scanf("%d", &n);
    struct Event events[n];
    for (int i=0; i<n; i++) {
        scanf("%s %d %d %d %s", &events[i].event, &events[i].date[0], &events[i].date[1], &events[i].date[2], &events[i].description);
    }
    for (int i=0; i<n; i++) {
        printf("\nEvent: %s\n", events[i].event);
        printf("Date: %d/%d/%d\n", events[i].date[0], events[i].date[1], events[i].date[2]);
        printf("Description: %s\n", events[i].description);
    }
    return 0;
}