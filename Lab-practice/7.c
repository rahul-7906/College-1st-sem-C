#include <stdio.h>
int main()
{
  int ch1, ch2, sum;
  int ch = '0';
  printf("enter characters :");
  ch1 = getchar() - ch;
  getchar();
  ch2 = getchar() - ch;

  //  scanf("%c %c",&ch1,&ch2);

  sum = ch1 + ch2;
  printf("Sum is %d", sum);

  return 0;
}