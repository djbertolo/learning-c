#include <stdio.h>

int main() {
    int character, index, whiteCount, otherCount;
    int digitCount[10];

    whiteCount = otherCount = 0;
    for (index = 0; index < 10; ++index) {
        digitCount[index] = 0;
    }

    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9') {
            ++digitCount[character - '0'];
        } else if (character == ' ' || character == '\n' || character == '\t') {
            ++whiteCount;
        } else {
            ++otherCount;
        }
    }
    printf("Digits = ");
    for (index = 0; index < 10; ++index) {
        printf(" %d", digitCount[index]);
    }
    printf(", whitespace = %d, other = %d\n", whiteCount, otherCount);
}