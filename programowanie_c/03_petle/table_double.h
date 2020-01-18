 #define TABLE_DOUBLE_H
 #include <stdio.h>
 #define SIZE 6

double tablica[SIZE];
void print_table();
void scan_table();
void biggest_number();
void smallest_number();

void scan_table() {
  for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &tablica[i]);
    }
}

void print_table() {
    for (int i = 0 ; i < SIZE; i++) {
        printf ("Element numer %i = %.2lf\n", (i+1), tablica[i]);
    }
}

void biggest_number() {
  for(int i = 0; i < SIZE; i++) {
       if(tablica[0] < tablica[i]) {
           tablica[0] = tablica[i];
       }
  }
    printf("Największa liczba: %.2lf\n", tablica[0]);
}

void smallest_number() {
  for(int i = 0; i < SIZE; i++) {
       if(tablica[0] > tablica[i]) {
           tablica[0] = tablica[i];
       }
  }
    printf("Najmniejsza liczba: %.2lf\n", tablica[0]);
}