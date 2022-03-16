#include <stdio.h>
int main()
{
    unsigned char a = 'a';

    int charToInt = a;

    printf("%d", charToInt);
    for (int i = 0; i <= 256; i++)
    {
        printf("%c \t", a++);
    }

    return 0;
}