#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char original[200];
    printf("Enter the text: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = 0; 
    char* copy = strdup(original);
    if (!copy) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Оригинал: %s\n", original);
    printf("Копия: %s\n", copy);

    free(copy); 
}
