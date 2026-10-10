#include <stdio.h>
int main()
{
    int Q, bill, discount;
    int finalBill;
    int rate = 65;

    printf("Enter quantity(how many kgs) :");
    scanf("%d", &Q);

    bill = Q * rate;

    if (bill > 2000)
    {
        discount = 0.2 * bill;
    }
    else if (bill > 1500)
    {
        discount = 0.15 * bill;
    }
    else if (bill > 1000)
    {
        discount = 0.1 * bill;
    }
    else
    {
        discount = 0;
    }

    finalBill = bill - discount;
    printf("Final bill amount after discount is %d", finalBill);

    return 0;
}