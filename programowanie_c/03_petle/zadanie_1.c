// Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printResult(int y) {
    printf("\t %2d %6.0lf \n", y, pow(2,y));
}

int main() {
    int upper = 2010;
    printf("Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające %d.\n", upper);

    int i = 1;
    while (pow(2,i) <= upper) {
        printResult(i);
        i++;
    }

    return 0;
}