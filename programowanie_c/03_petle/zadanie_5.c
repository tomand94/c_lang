// 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>
#define SIZE 6

int tablica[SIZE];
void print_table();
void scan_table();

int main() {
    printf("Podaj 6 liczb całkowitych do tablicy.\n");
    scan_table();
    print_table();
}

void scan_table() {
  for (int i = 0; i < SIZE; i++) {
        scanf("%i", &tablica[i]);
    }
}

void print_table() {
    for (int i = 0 ; i < SIZE; i++) {
        printf ("Element numer %i = %i\n", (i+1), tablica[i]);
    }
}