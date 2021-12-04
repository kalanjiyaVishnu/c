#include <stdio.h>
#include <string.h>
#include <ctype.h>
int getLength(char *str, char *str1);
int main()
{
    char *str = "Kalanjiya vishnu";
    char *str1 = "KALANJIYA VISHNU";
    int i = 0, flag = 1;
    // if (strcmp(str, str1))
    // {
    // printf("dsafadsfasdfasdf %d", );
    // }
    // strcmp(str, str1) == 0 ? printf("Equals ") : printf("not the same");
    int len = getLength(str, str1);
    while (str[i] != '\0' && i < len)
    {

        if (tolower(str[i]) != tolower(str1[i]))
        {
            flag = 0;
        }
        i++;
    }
    flag == 1 ? printf("Equals ") : printf("not the same");
    return 0;
}
int getLength(char *str, char *str1)
{
    int x = strlen(str), y = strlen(str1);
    if (x > y)
        return y;
    return x;
}