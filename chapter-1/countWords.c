#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int character;
    int lineCount = 0, wordCount = 0, characterCount = 0;
    int state = OUT;

    while ((character = getchar()) != EOF) {
        ++characterCount;
        if (character == '\n') {
            ++lineCount;
        }
        if (character == ' ' || character == '\n' || character == '\n') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            ++wordCount;
            putchar(character);
        } else {
            putchar(character);
        }
    }

    printf("%d %d %d\n", lineCount, wordCount, characterCount);

}