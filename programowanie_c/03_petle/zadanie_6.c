// 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.

#include <stdio.h>
#include "table_double.h"

int main() {
    printf("Podaj 6 liczb rzeczywistych do tablicy.\n");
    scan_table();
    biggest_number();
    smallest_number();
}

