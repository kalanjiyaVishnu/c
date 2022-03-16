#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int i = 0;
    fgets(str, 100, stdin);
    if ((strlen(str) - 1) % 2)
    {
        printf("odd shit");
        return;
    }
    int openC = 0, closeC = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) == '{')
        {
            openC++;
        }
        else if (*(str + i) == '}')
        {
            closeC++;
        }
        printf("%c", *(str + i));
        i++;
    }
    printf("{--> %d:%d <--}", openC, closeC);
    int res = openC > closeC ? (openC - closeC) / 2 : (closeC - openC) / 2;
    printf("%d", res);
    if (res == 0)
    {
        printf("\nbalenced");
    }
    else
    {
        printf("\nsomething");
    }
    fputs(str, stdout);
}