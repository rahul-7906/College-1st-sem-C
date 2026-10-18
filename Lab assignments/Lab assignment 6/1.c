#include <stdio.h>

int main(){
    int ch;
   printf("Enter a vowel : ");
   scanf("%c",&ch);

   switch(ch){
       case 'a':  case 'e': case 'i': case 'o': case 'u':
       case 'A':  case 'E': case 'I': case 'O':  case 'U':
                printf("VOWEL");
                break;
       default: 
               if((ch>='A' && ch <='Z') || (ch>='a' && ch<='z')){
                printf("Consonant");
               }  
               else{
                printf("Invalid input");
               }
   }
    return 0;
}