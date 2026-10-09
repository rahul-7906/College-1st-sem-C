#include <stdio.h>

int main(){
    float C,F;
  printf("Enter temperature in celsius : ");
  scanf("%f",&C);

  F = (9.0f*C)/5.0f + 32.0f;

  printf("Temperature in Fahrenheit is %.3f \n",F);

    return 0;
}