#include <stdio.h>
#include <math.h>

int main()
{
    float P, A, yrs, FV, i;
    int n;

    printf("Enter monthly deposit :");
    scanf("%f", &P);
    printf("Enter annual interest rate :");
    scanf("%f", &A);
    printf("Enter number of months :");
    scanf("%f", &yrs);

    n = (int)(yrs * 12);
    if (A == 0)
    {
        FV = P * n;
    }
    else
    {
        i = A / (12 * 100);

        FV = P * (pow(i + 1, n) - 1) / i;
    }
    printf("Future value is %.2f \n", FV);

    return 0;
}