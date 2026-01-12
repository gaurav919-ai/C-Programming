// Write a program to count the number of characters, words, and lines in a file.
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Chars=%d Words=%d Lines=%d\n", chars, words + 1, lines + 1);
    return 0;
}
