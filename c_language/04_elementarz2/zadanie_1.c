// 1. Popraw wszystkie błędy w tym programie tak, aby poprawiony program prawidłowo obliczał liczbę n.

#include <stdio.h>

int main() {
  int M = 0;
  int suma = 0;
  int i = 1;

  printf("Podaj liczbe M: \n");
  scanf("%d", &M);

  while (suma <= M) {
    suma=suma+i;
     i=i+1;
  }

  int n = i-1;
  printf("Szukane n to: %d\n", n);
  return 0;
}