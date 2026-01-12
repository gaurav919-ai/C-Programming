// Write a program that demonstrates the difference between global and local variables using the same variable name.
#include <stdio.h>

int x = 10;   // global variable

int main() {
    int x = 5;   // local variable
    printf("Local x = %d\n", x);
    return 0;
}
