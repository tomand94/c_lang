// 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>
#include "table.h"

int main() {
    printf("Podaj 6 liczb całkowitych do tablicy.\n");
    scan_table();
    print_table();
}

