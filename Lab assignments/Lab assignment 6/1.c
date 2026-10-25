#include <stdio.h>
int GCD(int a,int b);

int main(){
  int a,b;
  printf("Enter a and b :");
  scanf("%d %d",&a,&b);
  int ans = GCD(a,b);
  printf("GCD is %d",ans);
    return 0;
}

int GCD(int a,int b){
   int min;
  if(a<b){
    min=a;
  }else{
    min=b;
  }

  for(int i=min;i>=1;i--){
     if(a%i==0 && b%i==0){
        return i;
     }
  }
}