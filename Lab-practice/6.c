#include <stdio.h>
#include <math.h>
int main(){
   float p,n,r,SI,CI;

   printf("Enter principle(p) , rate(r) , time(n) from user : ");
   scanf("%f %f %f",&p,&r,&n);

   SI = (p*r*n)/100.0;
   CI = p*pow((1+r/100),n)-p;

   printf("Simple interest is %.2f \n",SI);
   printf("Compound interest is %.2f \n",CI);

    return 0;
}