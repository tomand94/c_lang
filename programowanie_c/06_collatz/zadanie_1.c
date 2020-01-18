// Napisz program który sprawdzi czy liczby w zakresie od 1 do 100 są zgodne z problemem Collatza "https://pl.wikipedia.org/wiki/Problem_Collatza"
// oraz przedstawi wynik w postaci tabeli gdzie: N - liczba podana przez użytkownika OK - czy liczba jest zgodna z problemem Collatza

#include <stdio.h>

void sprawdzenie(long unsigned int limit);

int main()
{
  printf("\tN\t|\tOK\t\n");
  printf("---------------------------------\n");
  sprawdzenie(100);
}

void sprawdzenie(long unsigned int limit) {
  int step = 0;
  int result;

  for(int i = 1; i <= limit; i++) {
    result = i;
    step = 0;

    while(result != 1)
    {
      if(result % 2 == 1)
      {
        result = 3 * result + 1;
        step ++;
      } else {
        result = result / 2;
        step ++;
      }
    }
    printf("\t%d\t|\tPRAWDA\t\n", i);
  }
}