#include <stdio.h>

int main(void) {
    int num, onesComplement;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    onesComplement = ~num; //~num = -(num+1)

    printf("Original number: %d\n", num);
    printf("1's complement (in decimal): %d\n", onesComplement);

    return 0;
}