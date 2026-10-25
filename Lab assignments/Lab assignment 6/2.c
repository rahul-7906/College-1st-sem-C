#include <stdio.h>
int sumOfDigits(int);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int sum =sumOfDigits(num);
    printf("Sum of digits is %d \n",sum);
    if(sum%2==0){
        printf("sum is EVEN \n");
    }else{
        printf("sum is ODD \n");
    }
    return 0;
}

int sumOfDigits(int n){
    int sum;
    while(n!=0){
    int ld = n%10;
    sum+=ld;
    n=n/10;
    }
    return sum;
}