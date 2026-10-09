#include <stdio.h>

int main(){
    int year;
    printf("Enter a year :");
    if(scanf("%d",&year) != 1){
        printf("Invalid Operator");
        return 1;
    }

    
    if(year%400==0||(year%4==0)&&(year%100!=0)){
        printf("It is a leap year");
    }else{
        printf("It is not a leap year");
    }
    return 0;
}