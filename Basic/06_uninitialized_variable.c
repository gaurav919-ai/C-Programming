// Write a program using an uninitialized variable and observe how the output changes on multiple runs.
#include <stdio.h>

int main() {
    int x;
    printf("Uninitialized value: %d\n", x);
    return 0;
}
