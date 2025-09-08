#include <stdio.h>

double fahrenheitToCelsius(double temperature);

int main() {

    printf("Fahrenheit to Celsius\n");

    double maxTemperature = 300.00;
    double temperatureIncremement = 15.0;
    for (double i = 0; i <= maxTemperature; i += temperatureIncremement) {
        printf("%7.2f%3s%7.2f\n", i, "->" , fahrenheitToCelsius(i));
    }

    return 0;
}

double fahrenheitToCelsius(double temperature) {
    return (temperature - 32) * 5 / 9;
}