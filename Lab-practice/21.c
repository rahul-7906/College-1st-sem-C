#include <stdio.h>

int main(){
    int a,b,c,temp;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("Enter value of c :");
    scanf("%d",&c);

    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b){ 
        temp=a;
        a=b;
        b=temp;
    }

    printf("%d %d %d",a,b,c);
    return 0;
}