 
// Napisz program który sprawdzi czy liczby w zakresie od 1 do 100 są zgodne z problemem Collatza "https://pl.wikipedia.org/wiki/Problem_Collatza"
// przedstawi wynik w postaci tabeli gdzie: N - liczba podana przez użytkownika, OK - czy liczba jest zgodna z problemem Collatza
// #N - ile kroków wykonano w rozwiązaniu problemu

#include <stdio.h>

void sprawdzenie(long unsigned int limit);

int main()
{
  printf("\tN\t|\tOK\t|\t#N\t\n");
  printf("--------------------------------------------------\n");
  sprawdzenie(100);
}

void sprawdzenie(long unsigned int limit)
{
  int krok = 0;
  int wynik;

  for(int i = 1; i <= limit; i++) {
    wynik = i;
    krok = 0;

    while(wynik != 1) {
      if(wynik % 2 == 1) {
        wynik = 3 * wynik + 1;
        krok++;
      } else {
        wynik = wynik / 2;
        krok++;
      }
    }
    printf("\t%d\t|  PRAWDA  |\t%d\t\n", i, krok);
  }
}