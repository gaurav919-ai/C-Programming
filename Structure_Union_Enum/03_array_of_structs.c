// Write a program to store and display details of multiple students using an array of structures.
#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s[2] = {
        {1, 80.0},
        {2, 88.5}
    };

    for (int i = 0; i < 2; i++) {
        printf("ID: %d Marks: %.2f\n", s[i].id, s[i].marks);
    }

    return 0;
}
