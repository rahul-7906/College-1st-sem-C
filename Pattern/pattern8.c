//   1
//  123
// 12345

#include <stdio.h>
int main(){
    int n =3;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i;j++){
            printf(" ");
        }
        for(int j = 0;j<2*i+1;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}