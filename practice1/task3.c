#include <stdio.h>
// Нужна проверка для символа(а как вот ее сделать, не знаю)
int main() {
    char ch;
    scanf("%s", &ch);
    if (ch > 'a' && ch < 'z') {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}