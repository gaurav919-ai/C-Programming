// Write a program to print the size of: int, float, double, char
#include <stdio.h>

int main() {
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("char: %lu byte\n", sizeof(char));
    return 0;
}
