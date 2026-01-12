// Write a function that returns multiple values using pointers.#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int s, d;
    calculate(10, 5, &s, &d);
    printf("Sum = %d, Difference = %d\n", s, d);
    return 0;
}
