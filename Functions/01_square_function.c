// Write a function that calculates the square of a number and explain how data is passed to the function.
#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    printf("Square: %d\n", square(5));
    return 0;
}
