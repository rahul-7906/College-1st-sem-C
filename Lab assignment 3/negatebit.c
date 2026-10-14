#include <stdio.h>

int main() {
    int value, key, result;
     printf("Enter key : ");
    scanf("%d",&key);
    printf("Enter value :");
    scanf("%d",&value);

    result = value^key;
    
    printf("Resulting value is: %d\n", result);

    return 0;
}