#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    char* token = strtok(name, ";");
    while (token != NULL) {
        printf(" % s\n", token);
        token = strtok(NULL, ";");
    }
}