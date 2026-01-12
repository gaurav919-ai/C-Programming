// Write a program to pass a structure to a function and print its members inside the function.
#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void display(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {3, 92.0};
    display(s1);

    return 0;
}
