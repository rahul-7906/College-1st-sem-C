#include <stdio.h>
int main(){
  char ch;
  printf("Enter an alphabet :");
  scanf("%c",&ch);

  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("It is a Vowel");
           }
    else{
        printf("It is a Consonant");
    }
 } else{
    printf("Invalid input");
}

    return 0;
}