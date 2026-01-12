// Write a recursive function to reverse a number.
#include <stdio.h>

int rev = 0;

int reverse(int n) {
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return reverse(n / 10);
}

int main() {
    printf("Reverse = %d\n", reverse(123));
    return 0;
}
