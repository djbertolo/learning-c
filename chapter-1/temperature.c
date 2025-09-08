#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    printf("Fahrenheit to Celsius");
    printf("---------");
    for (int fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit -= STEP) {
        float celsius = (fahrenheit - 32) * 5 / 9;
        printf("%3d%5s%5.1f\n", fahrenheit, " ==> ", celsius);
    }
}