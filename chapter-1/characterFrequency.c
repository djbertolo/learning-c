#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
    int character = 0;
    int state = OUT;

    int wordLength = 0;

    // Create arr for length frequency
    int maxLength = 10;
    int lengthFrequency[maxLength];
    for (int i = 0; i < maxLength; ++i) {
        lengthFrequency[i] = 0;
    }

    // Create arr for character Frequency
    int alphabetLength = 26;
    int characterFrequency[alphabetLength];
    for (int i = 0; i < alphabetLength; ++i) {
        characterFrequency[i] = 0;
    }

    // get frequency of chars
    while ((character = getchar()) != EOF) {
        if ((character >= 'a') && (character <= 'z')) {
            ++characterFrequency[character - 'a'];
            ++wordLength;
            if (state == OUT) {
                state = IN;
            }
        }
        if ((character == ' ') || (character == '\t') || (character == '\n')) {
            state = OUT;
            if (wordLength < maxLength) {
                ++lengthFrequency[wordLength];
            } else {
                ++lengthFrequency[maxLength];
            }
            wordLength = 0;
        }
    }

    // print frequency of words
    printf("%7s%3cFrequency\n", "Length", '|');
    for (int i = 0; i < maxLength; i++) {
        if (i == maxLength - 1) {
            printf("%7d+%3c", maxLength, '|');
        } else {
            printf("%7d%3c", i+1, '|');
        }
        for (int j = 0; j < lengthFrequency[i]; ++j) {
            printf("X");
        }
        printf("\n");
    }
    printf("----------\n");
    // print frequency of chars
    printf("%7s%3cFrequency\n", "Char", '|');
    for (int i = 0; i < alphabetLength; ++i) {
        printf("%7c%3c", 'a' + i, '|');
        for (int j = 0; j < characterFrequency[i]; ++j) {
            printf("X");
        }
        printf("\n");
    }
}