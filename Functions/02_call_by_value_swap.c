// Write a program to demonstrate call by value by attempting to swap two numbers using a function.
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 4;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
