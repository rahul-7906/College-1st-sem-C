#include <stdio.h>

float findFinalVelocity(float u, float a, float t) {
    return u + (a * t);
}

int main() {
    float u, a, t, v;

    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter uniform acceleration (a): ");
    scanf("%f", &a);

    printf("Enter time taken (t): ");
    scanf("%f", &t);

    v = findFinalVelocity(u, a, t);

    printf("Final velocity after time t: %.2f\n", v);

    return 0;
}