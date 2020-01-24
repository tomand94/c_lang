 
// Napisz program który sprawdzi czy liczby w zakresie od 1 do 100 są zgodne z problemem Collatza "https://pl.wikipedia.org/wiki/Problem_Collatza"
// przedstawi wynik w postaci tabeli gdzie: N - liczba podana przez użytkownika, OK - czy liczba jest zgodna z problemem Collatza
// #N - ile kroków wykonano w rozwiązaniu problemu

#include <stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void sprawdzenie(long unsigned int limit);

int main()
{
  printf(ANSI_COLOR_RED"\t  N\t|\tOK\t|\t #N\t\n");
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
    printf(ANSI_COLOR_RESET"\t%3d\t|     PRAWDA \t|\t%3d\t\n", i, krok);
  }
}