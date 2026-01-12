// Write a recursive function without a base case and observe what happens during execution.
#include <stdio.h>

void infinite() {
    printf("Calling...\n");
    infinite();
}

int main() {
    infinite();
    return 0;
}
