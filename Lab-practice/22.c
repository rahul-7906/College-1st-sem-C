#include <stdio.h>

int main(){
    float marks,percentage;
    float total = 0;
   for(int i = 1;i<=5;i++){
    printf("Enter marks of subject %d : ",i);
    scanf("%f",&marks);

    if(marks<0 || marks>100){
        printf("INVALID MARKS!Please enter again");
        i--;
    }else{
         total+=marks;
    }
   }
    
   percentage = (total/500)*100.0;
    printf("Percentage = %.2f, Grade = ", percentage);
   if (percentage >= 90.0) {
        printf("A\n");
    } else if (percentage >= 80.0) {
        printf("B\n");
    } else if (percentage >= 70.0) {
        printf("C\n");
    } else if (percentage >= 60.0) {
        printf("D\n");
    } else if (percentage >= 40.0) {
        printf("E\n");
    } else {
        printf("F\n");
    }

    return 0;
}