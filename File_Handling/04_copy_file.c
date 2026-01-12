// Write a program to copy the contents of one file into another file.
#include <stdio.h>

int main() {
    FILE *src = fopen("data.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}
