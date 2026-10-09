#include <stdio.h>
int main(){
    int a,b,c;
  printf("Enter 3 numbers :");
  scanf("%d %d %d",&a,&b,&c);
  
  if(a<=b && b<=c){
    printf("%d is minimum",a);
  } else if(b<=c && c<=a){
    printf("%d is minimum",b);
  } else {
    printf("%d is minimum",c);
  }

    return 0;
}