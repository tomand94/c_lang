#include "jbernoulli.h"
#include <math.h>
#include <stdio.h>

// prints bernoulli table
void print_bernoulli_table(int nrow);

int main() {
   print_bernoulli_table(10);
}

long long int powerll(long long int x, long long int y) {
    return (long long int)powl(x, y);
}

void print_bernoulli_table(int nrow) {
    for (int i = 1; i <= nrow; i++) {
        print_results(i, calculate_suma(i));
    }
}

void print_results(int x, int suma) {
    printf("1^%d + 2^%d + ... + 1000^%d = %12d\n", x, x, x, suma);
}

long long int calculate_suma(int y) {
    long long int result = 0;
    for (int i = 1; i <= 1000; i++) {
        result += powerll(i, y);
    }
    return result;
}