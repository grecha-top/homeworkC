#include <stdio.h>

int global_var = 10;  
static int static_var 

void print_from_file1() {
    printf("file1.c -> global_var = %d\n", global_var);
    printf("file1.c -> static_var = %d\n", static_var);
}
