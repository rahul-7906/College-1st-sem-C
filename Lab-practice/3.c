#include <stdio.h>
int main(){
    float BP;
    float HRA,TA,DA;
    float gross;
   printf("Enter Base pay(BP) :");
    scanf("%f",&BP);

    HRA = 0.1*BP;
    TA = 0.05*BP;
    DA = 1.5*BP;
   
    gross = BP+DA+HRA+TA;
    printf("gross pay is %.2f",gross);
    return 0;
}