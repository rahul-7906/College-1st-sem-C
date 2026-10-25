#include <stdio.h>

int product(int n){
  int last = n%10;

  int first=n;
  while(first>=10){
    first=first/10;
  }

  return first*last;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
   
    int prod=product(num);

    printf("Product of first and last digit is %d \n",prod);

    return 0;
}