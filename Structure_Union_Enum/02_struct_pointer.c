// Write a program to access structure members using a pointer to structure.
#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s = {2, 90.0};
    struct Student *p = &s;

    printf("ID: %d\n", p->id);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
