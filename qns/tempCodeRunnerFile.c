#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char a[20], b[20];
    char *a_ptr = a, *b_ptr = b;
    gets(a);
    gets(b);
    // scanf("%[^\ns", a);
    // scanf("%[^\n]s", b);
    while (*(a_ptr) != '\0')
    {
        // printf("%c", *a_ptr);
        a_ptr++;
    }
    printf("\n");
    while (*b_ptr != '\0')
    {
        *a_ptr = *b_ptr;
        a_ptr++;
        b_ptr++;
    }
    *a_ptr = '\0';
    printf("%s --> a", strlwr(b));
    // printf("%s -->b", b);
}
