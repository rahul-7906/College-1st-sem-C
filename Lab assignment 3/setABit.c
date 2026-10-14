#include <stdio.h>

int main(){
     int num,pos;
     printf("Enter a number : ");
     scanf("%d",&num);

     printf("Enter bit you want to set : ");
     scanf("%d",&pos);

     int temp = 1<<(pos-1);

     int res= num|temp;

     printf("Final number is %d",res);

    return 0;
}