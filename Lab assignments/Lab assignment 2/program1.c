#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter three sides : ");
    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1<=0 && side2<=0 && side3<=0){
        printf("Sides must be greater than 0 \n");
    }
    else if((side1+side2 > side3)&&(side2+side3 > side1) &&(side1+side3 >side2)){
        printf("Given lengths form a valid triangle \n");

        if(side1==side2 && side2==side3){
            printf("It is a equilateral triangle \n");
        }
        else if(side1==side2 || side2==side3 || side3==side1){
            printf("It is a Isoceles triangle \n");
        }else{
            printf("It is a scalene triangle \n");
        }
    }
    else{
        printf("The given triangle do not form a triangle \n");
    }


    return 0;
}