// Write a program to swap two numbers by passing their addresses to a function.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
