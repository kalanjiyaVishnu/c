#include <stdio.h>
void main(void)
{
    char s;
    char str[10];
    scanf("%c", &s);
    // printf("\n");
    scanf("%[^\n]s", str);
    printf("the char is %c and the strung is %s ", s, str);
}