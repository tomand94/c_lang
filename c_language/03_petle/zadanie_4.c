// 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika.
// Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.

#include <stdio.h>
void scan();
void logic();
int input = 0;
int suma = 1;

int main() {
    scan();
    logic();
}

void scan() {
    printf("Podaj liczbę do której będzie wyliczana suma: \n");
    scanf("%d", &input);
    printf("\n");
}

void logic() {
    if (input >= 1) {
        for (int i = 2; i <= input; i++) {
            suma += i;
            printf("%d \n", suma);
        }
    } else {
        printf("Podana liczba jest mniejsza od 1.\n");
    }
}