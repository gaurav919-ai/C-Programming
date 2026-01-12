// Write a program to access and print all elements of an integer array using a pointer.
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
