#include <stdio.h>
int main(){
    float s1,s2,s3,avg;
  printf("Enter 3 test scores(out of 25) : ");
  scanf("%f %f %f",&s1,&s2,&s3);
  
    if (s1 <= s2 && s1 <= s3) {
        avg = (s2 + s3) / 2.0;
    } else if (s2 <= s1 && s2 <= s3) {
        avg = (s1 + s3) / 2.0;
    } else {
        avg = (s1 + s2) / 2.0;
    }

    printf("Average of best two: %.2f\n", avg);


  return 0;
}