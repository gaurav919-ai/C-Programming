// Write a program to compare the memory size of a structure and a union with the same members.
#include <stdio.h>

struct Data1 {
    int a;
    float b;
};

union Data2 {
    int a;
    float b;
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct Data1));
    printf("Size of union: %lu\n", sizeof(union Data2));

    return 0;
}
