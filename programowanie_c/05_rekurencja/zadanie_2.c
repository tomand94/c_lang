// 2. Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k, czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.

#include <stdio.h>

int C(int n, int k);

int main() {
    int n,k, dwumian;
    scanf("%d", &n);
    scanf("%d", &k);
    dwumian = C(n,k);

    printf("C(%d, %d) = %d\n", n, k, dwumian);
}

int C(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return C(n - 1, k - 1) + C(n - 1, k);
  }
}