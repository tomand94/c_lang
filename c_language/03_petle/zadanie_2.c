// 2. Napisz program wyświetlający poniższą szachownicę:
/*
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
 */

#include <stdio.h>

void print_row_1() {
    printf("* * * * * * * *\n");
}

void print_row_2() {
    printf(" * * * * * * * *\n");
}

int main() {
    print_row_1();
    print_row_2();
    print_row_1();
    print_row_2();
    print_row_1();
    print_row_2();
    print_row_1();
    print_row_2();
}