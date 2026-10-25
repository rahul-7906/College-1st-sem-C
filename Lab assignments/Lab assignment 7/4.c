#include <stdio.h>
void TowerOfHanoi(int n,char A,char B,char C){
    if(n==0){
        return;
    }else{
        TowerOfHanoi(n-1,A,C,B);
        printf("Move a disc from %c to %c \n",A,C);
        TowerOfHanoi(n-1,B,A,C);
    }
}
int main(){
    int n;
  printf("Enter n : ");
  scanf("%d",&n);

  TowerOfHanoi(n,'A','B','C');

  return 0;
}