// 1. Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).

#include <stdio.h>
#include <math.h>

long rekurencja(long n, int k);

int main() {
    long n, wynik;
    int k;

    scanf("%ld", &n);
    scanf("%d", &k);
    wynik = rekurencja(n,k);

    printf("Wynik n do potęgi k: %ld\n", wynik);
}

long rekurencja(long n, int k) {
    if (n == 0 || k < 1) {
        return 0;
    };
    if (k == 0) {
        return 1;
    }
    if (k == 1) {
        return n;
    } else {
        return n*rekurencja(n,k-1);
    }
}
