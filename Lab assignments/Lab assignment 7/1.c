#include <stdio.h>
#include <math.h>

int countDigits(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}

int ArmstrongNumber(int num,int dig){
    int sum=0;
    int temp=num;
    while(temp!=0){
        int rem=temp%10;
        sum+=(int)round(pow(rem,dig));
        temp=temp/10;
    }
    return sum;
}

int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);

int dig=countDigits(num);
int ans = ArmstrongNumber(num,dig);

if(ans==num){
    printf("It is a armstrong NUmber \n");
}else{
    printf("It is not a armstrong number \n");
}
    return 0;
}