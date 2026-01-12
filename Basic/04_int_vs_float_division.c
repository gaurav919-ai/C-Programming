// Write a program to demonstrate integer division vs floating-point division.
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;

    result = a / b;
    printf("Integer division: %f\n", result);

    result = (float)a / b;
    printf("Float division: %f\n", result);

    return 0;
}
