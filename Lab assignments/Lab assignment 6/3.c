#include <stdio.h>
int printPrimeSum(int);
int main(){
    int num;
   printf("Enter upper limit : ");
   scanf("%d",&num);

   int sum= printPrimeSum(num);
   printf("Sum of prime numbers is %d",sum);
    return 0;
}

int printPrimeSum(int n) {
    if (n < 1) return 0;
    
    int sum = 1;
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            sum += i;
        }
    }
    return sum;
}