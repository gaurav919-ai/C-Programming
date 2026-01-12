// Write a program where using = instead of == inside an if condition changes the program output.
#include <stdio.h>

int main() {
    int a = 5;

    if (a = 10) {
        printf("Assignment inside if\n"); // Give Error
    }

    return 0;
}
