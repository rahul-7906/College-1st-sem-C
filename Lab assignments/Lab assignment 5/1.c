#include <stdio.h>

float toCelsius(float F) {
    float C;
    C = (F - 32.0) * 5.0 / 9.0;
    return C;
}

int main() {
    float F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = toCelsius(F);

    printf("Temperature in Celsius: %.2f\n", C);

    return 0;
}