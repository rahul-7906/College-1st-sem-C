// A
// AB
// ABC

#include <stdio.h>
int i,j;
int main(){
    int n=4;
    for(i=1;i<=n;i++){
        char ch = 'A';
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++; 
            // or directly 
            // printf("%c",'A'+j-1);
        }
        printf("\n");
    }

    return 0;
}
