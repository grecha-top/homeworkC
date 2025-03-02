#include <stdio.h>
#include <ctype.h>
#include <string.h>
void purge() {
    char str[50];
    char res[50];
    int total = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    for (int i=0; i<sizeof(str); i++) {
        if (str[i] == '\0') {
            break;
        }
        if (str[i] != ' ') {
            res[i-total] = str[i];
        } else {
            total+=1;
        }
    }
    printf("%s", res);
}

void change() {
    char letters[6] = "aeyuio";
    char str[50];
    char res[50];
    int total = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(letters, str[i]) != letters) {
            res[i] = str[i];
        } else {
            res[i] = '*';
        }
    } 
    printf("%s\n", res);
}

void reverse() {
    char str[50];
    char res[50];
    int total = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    for (int i=0; i<sizeof(str); i++) {
        if (str[i] == '\0') {
            break;
        }
        if (str[i] < 90 && str[i] > 65) {
            res[i] = tolower(str[i]);
        } else {
            res[i] = toupper(str[i]);
        }
    }
    printf("%s", res);
}

typedef void (*functions)();

typedef struct {
    char* name;
    functions func;
} comand;

int main() {
    comand comands[] = {
        {"purge", purge},
        {"change", change}, 
        {"reverse", reverse}, 
    };
    char cmd[20];
    printf("Введите команду: ");
    scanf("%s", cmd);
    getchar();
    for (int i = 0; i < 4; i++) {
        if (strcmp(cmd, comands[i].name) == 0) {
            comands[i].func();
            break;
        }
    }
    return 0;
}
