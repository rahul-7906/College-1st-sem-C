#include <stdio.h>
int main(){
    int r;
    float pi = 3.14;
    printf("Enter radius of circle :");
    scanf("%d",&r);

    float circumference = 2*pi*r;
    printf("Circumference is : %.2f",circumference);
    return 0;
}