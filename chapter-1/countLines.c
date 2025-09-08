#include <stdio.h>

int main() {
    int character, newLine;
    newLine = 0;
    while ((character = getchar()) != EOF) {
        if (character == '\n') {
            ++newLine;
        }
    }
    printf("%d\n", newLine);
}