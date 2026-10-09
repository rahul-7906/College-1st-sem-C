#include <stdio.h>
int main(){
    float m1,m2,m3,m4;
    float avg;
    printf("Enter marks of 4 subjects : ");
    scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
    
    avg = (m1+m2+m3+m4)/4.0;
    printf("The average marks in 4 subjects is %.2f \n",avg);
    return 0;
}