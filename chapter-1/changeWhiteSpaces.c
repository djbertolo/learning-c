#include <stdio.h>

int main() {
    // Count whitespaces
    int c = 0;
    int whiteSpaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            whiteSpaces++;
        } 
        if (c == '\t') {
           putchar(' ');
        }

        else {
            putchar(c);
        }
    }
    printf("%1d", whiteSpaces);
}