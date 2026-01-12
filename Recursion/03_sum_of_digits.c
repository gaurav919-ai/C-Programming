// Write a recursive function to calculate the sum of digits of a number.
#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum(n / 10);
}

int main() {
    printf("Sum = %d\n", sum(123));
    return 0;
}
