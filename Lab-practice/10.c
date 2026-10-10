#include <stdio.h>
int main()
{
    int salary, insurance, balanceSalary;
    printf("Enter your monthly Salary : ");
    scanf("%d", &salary);

    if (salary <= 10000)
    {
        insurance = 0.05 * salary;
    }
    else if (salary <= 25000)
    {
        insurance = 0.07 * salary;
    }
    else if (salary <= 50000)
    {
        insurance = 0.1 * salary;
    }
    else
    {
        insurance = 0.12 * salary;
    }

    balanceSalary = salary - insurance;
    printf("Balance Salary is %d", balanceSalary);

    return 0;
}