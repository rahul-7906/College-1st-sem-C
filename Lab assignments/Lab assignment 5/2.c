#include <stdio.h>

float findAverage(float a, float b, float c) {
    float avg;
    avg = (a + b + c) / 3.0;
    return avg;
}

int main() {
    float num1, num2, num3, avg;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    avg = findAverage(num1, num2, num3);

    printf("Average of the three numbers: %.2f\n", avg);

    return 0;
}