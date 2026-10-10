#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the angles : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b + c) == 180)
    {
        if (a <= b && a <= c)
        {
            printf("Smallest angle is %d", a);
        }
        else if (b <= a && b <= c)
        {
            printf("Smallest angle is %d", b);
        }
        else
        {
            printf("Smallest angle is %d", c);
        }
    }
    else
    {
        printf("INVALID TRIANGLE ");
    }
    return 0;
}