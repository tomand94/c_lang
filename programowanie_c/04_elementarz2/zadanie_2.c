#include <stdio.h>
#include <math.h>


int prime_number(int number) {
  int limit = sqrt(number);
  int divider = 2;

  while(divider <= limit) {
    if(number % divider++ == 0) {
      return 0;
    }
  } return 1;
}

int main() {
  int x = 0;

  printf("Podaj liczbe calkowitą: \n");
  scanf("%d", &x);

  printf("Podana liczba %d jest %s\n", x, prime_number(x) ? "pierwsza" : "złożona");

  return 0;
}

