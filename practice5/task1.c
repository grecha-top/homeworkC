#include <stdio.h>
#include <string.h>
int main() {
    for (int i = 0; i < 10; i++) {
        char name[50];
        fgets(name, sizeof(name), stdin);
        if (!strncmp(name, "SS", 2)) {
            printf("Result: %s", name);
            return 0;
        }
    }
    printf("Word don't find!\n");
    return 0;
}