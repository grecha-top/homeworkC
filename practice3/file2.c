#include <stdio.h>

extern int global_var;  

void print_from_file2() {
    printf("file2.c -> global_var = %d\n", global_var);
}
