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
    for (int i = 0; i < 8; i++) {
        if (i%2 == 1) {
            print_row_1();
        } else {
            print_row_2();
        }
    }
}