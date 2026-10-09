#include <stdio.h>
int main() {
    float principal, rate, time, simpleInterest, maturityAmount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;
    maturityAmount = principal + simpleInterest;

    printf("Simple Interest is: %.2f\n", simpleInterest);
    printf("Maturity Amount is: %.2f\n", maturityAmount);

    return 0;
}