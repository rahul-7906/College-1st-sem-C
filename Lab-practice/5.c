#include <stdio.h>

int main()
{
    float D, H;
    float speed1, speed2;
    printf("Enter distance in km(D) and time in hr(H) : ");
    scanf("%d %d", &D, &H);

    speed1 = D / H;
    speed2 = (speed1 * 3600) / 1000.00;

    printf("Speed in m/s is %.2f m/s", speed2);
    return 0;
}