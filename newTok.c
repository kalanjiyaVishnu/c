#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char keys[32][10] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum",
                         "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "while",
                         "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile"};
    char operators[12][2] = {"=", "+", "-", "*", "/", "%", "<", "<=", ">", ">=", "==", "!="};
    char inp[100];

    char dump[100][100];
    int i, dumbKeys, k, flag;
    scanf("%[^\n]s", inp);

    int n = strlen(inp);
    // printf("%s  -- inti input\n",inp);

    for (i = 0, dumbKeys = 0; i < strlen(inp); i++, dumbKeys++)
    {
        flag = 0;
        int curTokChar = 0;
        // printf("%c-\n",inp[i]);
        while (inp[i] != ' ' && inp[i] != '\0')
        {
            dump[dumbKeys][curTokChar++] = inp[i];
            // printf("%c- ",inp[i]);
            i++;
        }

        // printf("%s  ---print from in loop\n",temp[j]);

        if (isdigit(dump[dumbKeys][0]))
        {
            printf("%s is a number\n", dump[dumbKeys]);
            flag = 1;
        }
        for (k = 0; k < 32; k++)
        {
            if (strcmp(dump[dumbKeys], keys[k]) == 0)
            {
                printf("%s is a keyword\n", dump[dumbKeys]);
                flag = 1;
            }
        }
        for (k = 0; k < 12; k++)
        {
            if (strcmp(dump[dumbKeys], operators[k]) == 0)
            {
                printf("%s is an operator\n", dump[dumbKeys]);
                flag = 1;
            }
        }
        if (isalpha(dump[dumbKeys][0]) && !flag)
            printf("%s is a variable\n", dump[dumbKeys]);
        // printf("  %d --j",j);
    }

    return 0;
}