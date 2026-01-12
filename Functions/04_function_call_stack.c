// Write a program where one function calls another function and prints messages to show function call stack flow.
#include <stdio.h>

void second() {
    printf("Inside second function\n");
}

void first() {
    printf("Before calling second\n");
    second();
    printf("After calling second\n");
}

int main() {
    first();
    return 0;
}
