// Write a program where a function is declared but not defined and observe the compiler error.
#include <stdio.h>

void test();   // declaration only

int main() {
    test();
    return 0;
}
