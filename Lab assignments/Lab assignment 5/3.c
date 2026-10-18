#include <stdio.h>

float findCircumference(float r) {
    const float PI = 3.14;
    float circumference;
    circumference = 2.0 * PI * r;
    return circumference;
}

int main() {
    float r, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    circumference = findCircumference(r);

    printf("Circumference of the circle: %.3f\n", circumference);

    return 0;
}