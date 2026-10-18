#include <stdio.h>

int main(){
     int num;
     int ones,twos;
     printf("Enter a number : ");
     scanf("%d",&num);

    ones = ~num;
    twos = ones+1;
    
    printf("One's Complement is : %d \n",ones);
    printf("Two's Complement is : %d \n",twos);
    return 0;
}