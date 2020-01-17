// 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.

#include <stdio.h>
#define SIZE 6

double tablica[SIZE];
void scan_table();
void print_table();

int main() {
    printf("Podaj 6 liczb rzeczywistych do tablicy.\n");
    scan_table();
    print_table();
}

void scan_table() {
  for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &tablica[i]);
    }
}

void print_table() {
    for (int i = 0 ; i < SIZE; i++) {
        if (tablica[i] > 0) {
        printf ("Element numer %i = %.2lf\n", (i+1), tablica[i]);
        }
    }
}