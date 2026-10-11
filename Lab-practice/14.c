#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter the units of Electricity consumed :");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = 2 * units;
    }
    else if (units > 100 && units <= 200)
    {
        bill = 2 * 100 + 3 * (units - 100);
    }
    else
    {
        bill = 2 * 100 + 3 * 100 + 5 * (units - 200);
    }

    printf("Total bill is %d", bill);
    return 0;
}