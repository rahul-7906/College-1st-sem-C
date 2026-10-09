#include <stdio.h>

int main() {
    int years;
    long long seconds;

    printf("Enter your age in years: ");
    scanf("%d", &years);

    seconds = (long long)years * 365 * 24 * 60 * 60;
   printf("Approximate age in seconds is: %lld\n", seconds);

    return 0;
}