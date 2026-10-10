#include <stdio.h>

int main()
{
    int ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("It is a Alphabet \n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a number \n");
    }
    else
    {
        printf("It is a Special Symbol \n");
    }
    return 0;
}