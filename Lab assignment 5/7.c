#include <stdio.h>

long ageInSeconds(int years) {
    long seconds;
    seconds = (long)years * 365 * 24 * 60 * 60;
    return seconds;
}

int main() {
    int years;
    long seconds;

    printf("Enter your age in years: ");
    scanf("%d", &years);

    seconds = ageInSeconds(years);

    printf("Approximate age in seconds: %ld\n", seconds);

    return 0;
}