/* Napisz program, który będzie zawierał funkcję MinMax. Funkcja ta ma przyjmować tablicę liczb całkowitych
(wraz z ich rozmiarem podanym na początku programu) oraz zwracać ma jednocześnie najmniejszy oraz największy element tej tablicy.
Funkcja ta ma wywoływać zaimplementowane przez użytkownika funkcje min i max odpowiadające za wyszukiwanie najmniejszego oraz największego elementu tablicy.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

    void Min(int *tablica) {
    int *wsk;
    int indeks;

    for (indeks = 0, wsk = tablica; indeks < SIZE; indeks++, wsk++) {
      if (tablica[0] > tablica[indeks]) {
          tablica[0] = tablica[indeks];
      }
    }

    printf("Najmniejsza liczba: %d\n", tablica[0]);

}

    void Max(int *tablica) {
    int *wsk;
    int indeks;

    for (indeks = 0, wsk = tablica; indeks < SIZE; indeks++, wsk++) {
      if (tablica[0] < tablica[indeks]) {
          tablica[0] = tablica[indeks];
      }
    }

     printf("Największa liczba: %d\n", tablica[0]);
}

int main() {
    int tablica[SIZE];
    int *wsk;
    int indeks;

    for (indeks = 0, wsk = tablica; indeks < SIZE; indeks++, wsk++) {
      scanf("%d", &tablica[indeks]);
    }

    Min(tablica);
    Max(tablica);
    return 0;
}