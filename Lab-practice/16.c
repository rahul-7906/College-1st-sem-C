#include <stdio.h>
int main()
{
    float markedPrice, discount, finalPrice;
    float discountedPrice, GSTpaid;
    float GST = 0.18;
    printf("Enter marked price :");
    scanf("%f", &markedPrice);

    if (markedPrice >= 10000)
    {
        discount = 0.25;
    }
    else if (markedPrice >= 5000 && markedPrice < 10000)
    {
        discount = 0.15;
    }
    else
    {
        discount = 0.05;
    }

    discountedPrice = discount * markedPrice;
    GSTpaid = (markedPrice - discountedPrice) * GST;
    finalPrice = markedPrice - discountedPrice + GSTpaid;

    printf("Marked Price is %.2f \n", markedPrice);
    printf("Discount amount is %.2f \n", discountedPrice);
    printf("GST paid is %.2f \n\n", GSTpaid);
    printf("Final Price is %.2f \n", finalPrice);

    return 0;
}
