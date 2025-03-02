#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[50];
    const char *str1 = "launch-2025"; 
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    for (int i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
    }
    int n;
    n = strcmp(str1, s);
    if (n == 0) {
        printf("%s", "Код принят!\n");
    } else {
        printf("%s", "Ошибка: неверный код!\n");
    }
}