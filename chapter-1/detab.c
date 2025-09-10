#include <stdio.h>

#define MAX_LINE 1000  // Character count
#define TAB_SPACES 4   // 4 > 2
#define MAX_TABBED_LINE 4000   // Assumes a valid input can be full of tabs

void getLine(char line[], int limit); // Returns length of Line
void detab(char line[], char newLine[]); // Replaces tabs to TAB_SPACES amount of spaces
int getStringLength(char line[]);

int main() {
    char line[MAX_LINE];
    char detabLine[MAX_TABBED_LINE];
    getLine(line, MAX_LINE);
    detab(line, detabLine);
    int lineLength = getStringLength(line);
    int detabLineLength = getStringLength(detabLine);
    printf("Original Line: %s\n", line);
    printf("Original Line Length: %d\n", lineLength);
    printf("Detabbed Line: %s\n", detabLine);
    printf("Detabbed Line Length: %d\n", detabLineLength);
}

void getLine(char line[], int limit) {
    int character;
    int index = 0;

    while ((character = getchar()) != EOF && character != '\n') {
        if (index <= limit - 1) {
            line[index] = character;
        }
        ++index;
    }

    if (character == '\n') {
        line[index] = character;
        ++index;
    }

    line[index] = '\0';
}

void detab(char line[], char newLine[]) {
    int character;
    int index = 0;
    int jindex = 0;
    while ((character = line[index]) != '\0') {
        if (character == '\t') {
            for (int k = 0; k < TAB_SPACES; ++k) {
                newLine[jindex] = ' ';
                jindex++;
            }
            ++index;
        } else {
            newLine[jindex] = line[index];
            ++index;
            ++jindex;
        }
    }
}

int getStringLength(char line[]) {
    int character;
    int index = 0;
    while ((character = line[index]) != '\0') {
        ++index;
    }
    return index;
}