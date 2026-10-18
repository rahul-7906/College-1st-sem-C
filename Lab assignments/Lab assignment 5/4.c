#include <stdio.h>
float calculateSI(float p, float r, float t) {
    return (p * r * t) / 100.0;
}

float calculateMaturityAmount(float p, float si) {
  return  p + si;
}

int main() {
    float p, r, t, si, amount;
    printf("Enter P, R, and T: ");
    scanf("%f %f %f", &p, &r, &t);
    si = calculateSI(p, r, t);
    amount = calculateMaturityAmount(p, si);
    printf("SI: %.2f\nMaturity Amount: %.2f\n", si, amount);
    return 0;
}
