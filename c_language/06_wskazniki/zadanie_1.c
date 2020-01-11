#include <stdio.h>
#include <stdlib.h>

  void podnies_do_kwadratu(int *n) {
      *n = (*n)*(*n);
  }

  void wczytaj_liczbe(int *n) {
      scanf("%d", n);
  }

int main() {
  int liczba;
  int a,b;
  wczytaj_liczbe(&liczba);
  printf("%d\n", liczba);

  podnies_do_kwadratu(&liczba);
  printf("Kwadrat wczytanej liczby to %d\n", liczba);

  return 0;
}