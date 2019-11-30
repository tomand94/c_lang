#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long suma = 0;
    unsigned long long suma_2 = 0;
    unsigned long long suma_3 = 0;
    unsigned long long suma_4 = 0;
    unsigned long long suma_5 = 0;
    unsigned long long suma_6 = 0;
    unsigned long long suma_7 = 0;
    unsigned long long suma_8 = 0;
    unsigned long long suma_9 = 0;
    unsigned long long suma_10 = 0;

    long number = 1;
    long number_2 = 1;
    long number_3 = 1;
    long number_4 = 1;
    long number_5 = 1;
    long number_6 = 1;
    long number_7 = 1;
    long number_8 = 1;
    long number_9 = 1;
    long number_10 = 1;

    // Suma 100 pierwszych liczb naturalnych
    for (int i = 0; i < 100; i++) {
        suma += number;
        number++;
    }
    printf("Suma 100 pierwszych liczb naturalnych wynosi: %llu\n", suma);

    // Suma 100 pierwszych liczb naturalnych do kwadratu
    for (int i = 0; i < 100; i++) {
        suma_2 += pow(number_2,2);
        number_2++;
    }
    printf("Suma kwadrat wynosi: %llu\n", suma_2);

    // Suma 100 pierwszych liczb naturalnych do potęgi 3
    for (int i = 0; i < 100; i++) {
        suma_3 += pow(number_3,3);
        number_3++;
    }
    printf("Suma do potęgi 3 wynosi: %llu\n", suma_3);

    // Suma 100 pierwszych liczb naturalnych do potęgi 4
    for (int i = 0; i < 100; i++) {
        suma_4 += pow(number_4,4);
        number_4++;
    }
    printf("Suma do potęgi 4 wynosi: %llu\n", suma_4);

    // Suma 100 pierwszych liczb naturalnych do potęgi 5
    for (int i = 0; i < 100; i++) {
        suma_5 += pow(number_5,5);
        number_5++;
    }
    printf("Suma do potęgi 5 wynosi: %llu\n", suma_5);

       // Suma 100 pierwszych liczb naturalnych do potęgi 6
    for (int i = 0; i < 100; i++) {
        suma_6 += pow(number_6,6);
        number_6++;
    }
    printf("Suma do potęgi 6 wynosi: %llu\n", suma_6);

    // Suma 100 pierwszych liczb naturalnych do potęgi 56
    for (int i = 0; i < 100; i++) {
        suma_6 += pow(number_6,6);
        number_6++;
    }
    printf("Suma do potęgi 6 wynosi: %llu\n", suma_6);

   // Suma 100 pierwszych liczb naturalnych do potęgi 7
    for (int i = 0; i < 100; i++) {
        suma_7 += pow(number_7,7);
        number_7++;
    }
    printf("Suma do potęgi 7 wynosi: %llu\n", suma_7);

       // Suma 100 pierwszych liczb naturalnych do potęgi 8
    for (int i = 0; i < 100; i++) {
        suma_8 += pow(number_8,8);
        number_8++;
    }
    printf("Suma do potęgi 8 wynosi: %llu\n", suma_8);

       // Suma 100 pierwszych liczb naturalnych do potęgi 9
    for (int i = 0; i < 100; i++) {
        suma_9 += pow(number_9,9);
        number_9++;
    }
    printf("Suma do potęgi 9 wynosi: %llu\n", suma_9);

    // Suma 100 pierwszych liczb naturalnych do potęgi 10
    for (int i = 0; i < 100; i++) {
        suma_10 += pow(number_10,10);
        number_10++;
    }
    printf("Suma do potęgi 10 wynosi: %llu\n", suma_10);
}