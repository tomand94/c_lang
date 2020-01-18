#define TABLE_PLUS_H
#include <stdio.h>
#define SIZE 6

double tablica[SIZE];
void scan_table();
void print_table();

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