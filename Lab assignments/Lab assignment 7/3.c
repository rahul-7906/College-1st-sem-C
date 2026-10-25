#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / factorial(i);
    }
    return sum;
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Please enter a number between 1 and 20.\n");
        return 0;
    }

    double ans = sumSeries(n);
    printf("Sum of the series = %.3lf\n", ans);

    return 0;
}