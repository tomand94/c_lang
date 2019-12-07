// 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.

#include <stdio.h>

int a = 0;
int b = 0;
void scan_numbers();
void print_numbers();

int main() {
    scan_numbers();
    print_numbers();
}

void scan_numbers() {
    printf("Podaj liczbę a \n");
    scanf ("%d", &a);

    printf("Podaj liczbę b \n");
    scanf ("%d", &b);

    printf("\n");
}

void print_numbers() {
    if (a<b) {
        while (a<=b) {
            printf("%d \n", a);
            a += 1;
        }
    } else {
        printf("Liczba b jest większa od a.\n");
    }
}