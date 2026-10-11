#include <stdio.h>
int main(){
    int bal_amt,withdrawl_amt;
   printf("Enter your Account Balance : ");
   scanf("%d",&bal_amt);
   printf("Enter Withdrawl amount : ");
   scanf("%d",&withdrawl_amt);

   if((bal_amt>withdrawl_amt)&&(withdrawl_amt%100==0)){
    printf("Access granted! Withdrawl Successful \n");
    bal_amt -= withdrawl_amt;
    printf("Updated Balance is %d \n",bal_amt);
   }else{
    printf("ERROR! You don't have sufficient amount in your Bank \n");
   }
    return 0;
}