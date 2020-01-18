// 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.

#include <stdio.h>
#include "table_plus.h"

int main() {
    printf("Podaj 6 liczb rzeczywistych do tablicy.\n");
    scan_table();
    print_table();
}