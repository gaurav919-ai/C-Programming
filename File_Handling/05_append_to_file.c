// Write a program to append data to an existing file without overwriting previous content.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    fprintf(fp, "\nAppended text");
    fclose(fp);
    return 0;
}
