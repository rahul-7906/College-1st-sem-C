#include <stdio.h>
int main(){
   int ch;
   printf("Enter a character : ");
   scanf("%c",&ch);

   if(ch>='A' && ch<='Z'){
    printf("Uppercase Character \n");
     ch=ch+32;
    printf("In lowecase it is %c",ch); 
   }else if(ch>='a' && ch<='z'){
    printf("Lowercase Character \n");
    ch=ch-32;
    printf("In uppercase it is %c",ch);
   }else if(ch>='0' && ch<= '9'){
    printf("A Digit \n");
   }else if(ch==' '){
    printf("Whitespace Character \n");
   }else{
    printf("Special Symbol \n");
   }
    return 0;
}