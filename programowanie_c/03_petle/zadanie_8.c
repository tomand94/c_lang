/* Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim.
Użyj pętli for do generowania wzorów.
Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie).
Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****
*/

#include <stdio.h>
#include <stdlib.h>

void print_pattern(int pattern_length, int start_counter, int change_counter, char sign_1, char sign_2);

int main()
{
  print_pattern(4,1,1,'*',' ');
  print_pattern(4,4,0,'*',' ');
  print_pattern(4,0,1,' ','*');
  print_pattern(4,3,0,' ','*');
}

void print_pattern(int pattern_length, int start_counter, int change_counter, char sign_1, char sign_2)
{
  printf("\n");
  for(int c = 0; c < pattern_length; c++)
  {
    for(int i = 0; i < start_counter; i++)
    {
      putchar(sign_1);
    }
    for(int i = 0; i < pattern_length - start_counter; i++)
    {
      putchar(sign_2);
    }
    printf("\n");
    if(change_counter == 1)
    {
      start_counter ++;
    } else {
      start_counter --;
    }
  }
}