// 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.
#include <stdio.h>
#include "zadanie_7_table.h"

int main() {
    printf("Podaj 6 liczb rzeczywistych do tablicy.\n");
    scan_table();
    print_table();
}