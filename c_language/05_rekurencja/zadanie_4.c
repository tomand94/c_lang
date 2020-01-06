// 4. Korzystając z twierdzenia Euklidesa, napisać program obliczający rekurencyjnie największy wspólny dzielnik z liczb podanych na wejściu.

#include <stdio.h>

int nwd(int a,int b);

int main(){
  int a, b;
  
  printf("Podaj liczby: \n");
  scanf("%d %d", &a, &b);
  printf("nwd(%d,%d) = %d\n", a, b, nwd(a,b));
}

int nwd(int a,int b)
{
  int c;
  while(b != 0)
  {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}