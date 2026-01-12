// Write a program to dynamically allocate memory for an integer using malloc(), assign a value, print it, and free the memory.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int *)malloc(sizeof(int));

    *p = 25;
    printf("Value: %d\n", *p);

    free(p);

    return 0;
}
