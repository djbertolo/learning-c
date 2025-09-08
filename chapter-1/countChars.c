#include <stdio.h>

int main() {
    double charCount;
    for (charCount = 0; getchar() != EOF;) {
        printf("%.0f\n", charCount);
    }
}