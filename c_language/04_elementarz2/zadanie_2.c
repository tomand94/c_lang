#include <stdio.h>
#include <math.h>


int jest_pierwsza(int num_for_test)
{
  int limit = sqrt(num_for_test);
  int divider = 2;

  while(divider <= limit)
  {
    if(num_for_test % divider++ == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int n = 0;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  printf("Podana liczba %d jest %s\n",
  n, jest_pierwsza(n) ? "pierwsza" : "złożona");

  return 0;
}

