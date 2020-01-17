#include <stdio.h>
#include <stdlib.h>

    void swap_integers(int* a, int* b) {
      int temp = *a;
      *a = *b;
      *b = temp;
    }

    void wczytaj_liczbe(int *n) {
     scanf("%d", n);
    }

    int main() {
        int a,b;
        wczytaj_liczbe(&a);
        wczytaj_liczbe(&b);

        swap_integers(&a,&b);
        printf("%d %d\n", a, b);

        return 0;
    }