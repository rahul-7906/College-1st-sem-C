#include <stdio.h>
int main(){
    float v,u,a,t;
    printf("Enter initial velocity(u) :");
    scanf("%f",&u);
    printf("Enter acceleration(a) :");
    scanf("%f",&a);
    printf("Enter time(t) :");
    scanf("%f",&t);

    v = u+(a*t);
    printf("Final velocity is : %f",v);
    return 0;
}