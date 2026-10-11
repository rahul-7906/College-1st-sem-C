#include <stdio.h>
int main(){
    int a,b;
    char op;
   printf("Enter a :");
   scanf("%d",&a);
   printf("Enter b :");
   scanf("%d",&b);
   printf("Enter operator : ");
   scanf(" %c",&op);

   if(op=='+'){
      printf("Sum is %d \n",a+b);
   }else if(op=='-'){
    printf("Subtraction is %d \n",a-b);
   }else if(op=='*'){
    printf("Product is %d \n",a*b);
   }else if(op=='/'){
        if(b==0){
            printf("Error: Division by zero is not allowed.\n");
        }else{
        printf("Divisio is %d \n",a-b);
        }
   }else{
    printf("INVALID OPERATOR \n");
   }
    return 0;
}