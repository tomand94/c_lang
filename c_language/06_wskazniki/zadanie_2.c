#include <stdio.h>
#include <stdlib.h>

void f1(int n){
   n++;
}
/*
void f2(int &n){
   n++;
}
Powyższy kod nie zadziała, ponieważ funkcja nie ma skąd wziąć adresu zmiennej n.
*/

void f2(int *n){ //poprawna funkcja
   (*n)++;
}

int main() {
    int a = 10;
    f1(a);
    printf("%d\n", a);
    f2(&a);
    printf("%d\n", a);
    return 0;
}