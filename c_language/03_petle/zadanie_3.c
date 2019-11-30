// 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Podaj liczbę a \n");
    scanf ("%d", &a);

    printf("Podaj liczbę b \n");
    scanf ("%d", &b);

    printf("----------------------------\n");

    if (a<b) {
        while (a<=b) {
            printf("%d \n", a);
            a += 1;
        }
    } else {
        printf("Liczba b jest większa od a.\n");
    }
}