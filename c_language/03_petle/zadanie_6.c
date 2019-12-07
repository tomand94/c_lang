// 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.

#include <stdio.h>
#define SIZE 6

int tablica[SIZE];
void print_table();
void scan_table();
void biggest_number();
void smallest_number();

int main() {
    printf("Podaj 6 liczb całkowitych do tablicy.\n");
    scan_table();
    biggest_number();
    smallest_number();
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

void biggest_number() {
  for(int i = 0; i < SIZE; i++)
    {
       if(tablica[0] < tablica[i])
           tablica[0] = tablica[i];
    }
    printf("Największa liczba: %d\n", tablica[0]);
}

void smallest_number() {
  for(int i = 0; i < SIZE; i++)
    {
       if(tablica[0] > tablica[i])
           tablica[0] = tablica[i];
    }
    printf("Najmniejsza liczba: %d\n", tablica[0]);
}


/* 
void print_table() {
    for (int i = 0 ; i < SIZE; i++) {
        printf ("Element numer %i = %i\n", (i+1), tablica[i]);
    }
}

void biggest_number() {
  for(int i = 0; i < SIZE; i++)
    {
       // Change < to > if you want to find the smallest element
       if(tablica[0] < tablica[i])
           tablica[0] = tablica[i];
    }
    printf("Largest element = %d", tablica[0]);
}
*/
