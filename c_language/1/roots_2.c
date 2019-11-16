#include <stdio.h>
#include <math.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    double a, b, c;
    double delta, sqrt_delta;
    double x1, x2;

    printf(ANSI_COLOR_RED "Podaj liczbę a: ");
    scanf("%lf", &a);

    printf(ANSI_COLOR_RED "Podaj liczbę b: ");
    scanf("%lf", &b);

    printf(ANSI_COLOR_RED "Podaj liczbę c: ");
    scanf("%lf", &c);


    delta = b*b - (4*a*c);
    sqrt_delta = sqrt(delta);
    x1 = (-b - sqrt_delta) / (2*a);
    x2 = (-b + sqrt_delta) / (2*a);

    printf(ANSI_COLOR_GREEN "Liczba a: %lf, liczba b: %lf, liczba c: %lf\n", a, b, c);
    printf(ANSI_COLOR_GREEN "Delta wynosi: %lf, pierwiastek z delty: %lf\n", delta, sqrt_delta);
    printf(ANSI_COLOR_GREEN "x1 wynosi: %lf, x2 wynosi: %lf\n", x1, x2);

}