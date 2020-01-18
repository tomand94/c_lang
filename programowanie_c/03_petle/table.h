 #define TABLE_H
 #include <stdio.h>
 #define SIZE 6

int tablica[SIZE];
void print_table();
void scan_table();

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