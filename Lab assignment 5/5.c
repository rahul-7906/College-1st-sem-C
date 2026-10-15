#include <stdio.h>

float kmphToMps(float kmph) {
    float mps;
    mps = kmph * (5.0 / 18.0);
    return mps;
}

int main() {
    float kmph, mps;

    printf("Enter velocity in km/h: ");
    scanf("%f", &kmph);

    mps = kmphToMps(kmph);

    printf("Velocity in m/s: %.2f\n", mps);

    return 0;
}