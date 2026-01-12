// Write a program to declare an integer variable, create a pointer to it, and print the variable value using the pointer.
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Value using pointer: %d\n", *p);

    return 0;
}
