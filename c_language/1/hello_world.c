#include <stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    char name[666];
    int count;

    printf("Podaj liczbę iteracji: ");
    scanf("%d", &count);

    printf("Podaj imię: ");
    scanf("%s", name);

    printf("Liczba iteracji: %d.\n\n", count);

    for(size_t i = 0; i < count; i++) {
        if (i%2 == 0) {
            printf(ANSI_COLOR_BLUE "Hello %s!\n", name);
        } else {
            printf(ANSI_COLOR_GREEN "Hello %s!\n", name);
        }
    }
}