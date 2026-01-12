// Write a program to define an enum for days of the week and print one enum value.
#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {
    enum Day today = TUESDAY;

    printf("Day value: %d\n", today);

    return 0;
}
