#include <stdio.h>
int main(){
    float vel,vel2;
    printf("Enter velocity in km/h :");
    scanf("%f",&vel);

    vel2 = (vel*1000)/3600.00;
    printf("velocity in m/s is : %.2f",vel2);


    return 0;
}