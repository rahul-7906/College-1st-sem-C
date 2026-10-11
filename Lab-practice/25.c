#include <stdio.h>
#include <ctype.h>
int main(){
    float bill,afterDiscount,discount,memberDiscount,finalBill;
    char premium;
   printf("Enter Bill Amount : ");
   scanf("%f",&bill);
   printf("Do you have premium membership(Y/N) :");
   scanf(" %c",&premium);
   premium = toupper(premium);

   if(bill>5000){
    discount = 0.2*bill;
   }else if(bill>2000){
    discount = 0.1*bill;
   }else{
    discount = 0.0;
   }

   afterDiscount = bill-discount;

   if(premium=='Y'){
    memberDiscount = 0.05*afterDiscount;
   }else{
    memberDiscount = 0.0;
   }

   finalBill = afterDiscount - memberDiscount;

   printf("Regular discount is %.2f \n",discount);
   printf("Membership discount is %.2f \n\n",memberDiscount);
   printf("Final Bill is %.2f \n",finalBill);

    return 0;
}