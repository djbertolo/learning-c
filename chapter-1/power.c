#include <stdio.h>

int power(int base, int exponent);

int main() {
    for (int i = 0; i < 10; ++i) {
        printf("%d %d %d\n", 2, i, power(2, i));
    }
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    return result;
}