#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countVowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int compareAlphabet(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strcasecmp(str1, str2); 
}

int compareLength(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strlen(str1) - strlen(str2);
}

int compareVowels(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return countVowels(str1) - countVowels(str2);
}

typedef int (*compareFunc)(const void*, const void*);

typedef struct {
    char* name;
    compareFunc func;
} sortCommand;

int main() {
    sortCommand commands[] = {
        {"Alphabet", compareAlphabet},
        {"Length", compareLength},
        {"Vowels", compareVowels},
    };

    printf("Enter the amount strings: ");
    int n;
    scanf("%d", &n);
    getchar(); 

    char** strings = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        strings[i] = (char*)malloc(50 * sizeof(char));
        printf("Enter the string %d: ", i + 1);
        fgets(strings[i], 50, stdin);
        strings[i][strcspn(strings[i], "\n")] = 0; 
    }

    printf("Choose sorting mode:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, commands[i].name);
    }

    int choice;
    scanf("%d", &choice);
    getchar();

    qsort(strings, n, sizeof(char*), commands[choice - 1].func);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
