// 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>
#define SIZE 6
int main(int argc, char const *argv[]) {

    int tablica[SIZE];
    printf("Podaj 6 liczb całkowitych do tablicy.\n");

    for (int i = 0; i < SIZE; i++) {
        scanf("%i", &tablica[i]);
    }

    for (int i = 0 ; i < SIZE; i++) {
        printf ("Element numer %i = %i\n", (i+1), tablica[i]);
    }
}