#include <stdio.h>
#include <stdlib.h>

int main () {
  int ref[10];
  int *wsk;
  int indeks;

  for (indeks = 0, wsk = ref; indeks < 10; indeks++, wsk++) {
      scanf("%d", &ref[indeks]);
  }

  for (indeks = 0, wsk = ref; indeks < 10; indeks++, wsk++) {
      printf("%d ", ref[indeks]);
  }

  return 0;
}