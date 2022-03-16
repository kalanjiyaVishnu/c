#include <stdio.h>
#include <string.h>
#include <ctype.h>
char keys[32][10] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum",
                     "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "while",
                     "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile"};
char operators[12][2] = {"=", "+", "-", "*", "/", "%", "<", "<=", ">", ">=", "==", "!="};

struct Identifier
{
    int id;
    char name[20];
    int keyIndex;
    int size;
} SymbolTable[100];
int STI = 0;

int isKey(char *ptr)
{
    for (int i = 0; i < 32; i++)
    {
        if (!strcmp(ptr, keys[i]))
        {
            return i;
        }
    }

    return 0;
}
int isOp(char *ptr)
{
    for (int i = 0; i < 12; i++)
    {
        if (!strcmp(ptr, operators[i]))
        {
            return 1;
        }
    }
    return 0;
}

int getSize(int keyWordIndex)
{
    if (keyWordIndex == 16)
    {
        return 4;
    }
}

int main()
{
    char in[100];

    fgets(in, 100, stdin);

    in[strlen(in) - 1] = '\0';

    char inMap[100][100];
    int inMapIndexKey = 0;
    int flag = 0;
    int prevKey = 0;
    char head = 127;

    while (1)
    {

        // scanf("%[^\n]s", inp); --> 2 i/p swapped with first --> loop

        if (!strcmp(in, "END"))
        {
            return 0;
        }
        printf("\n%c ------\n", head);

        for (int i = 0; i < strlen(in); i++)
        {
            flag = 0;
            int currKeyIndex = 0;
            while (in[i] != '\0' && in[i] != ' ')
            {
                inMap[inMapIndexKey][currKeyIndex++] = in[i];
                i++;
            }
            // printf("%s ---in loop", inMap[inMapIndexKey]);

            if (isdigit(inMap[inMapIndexKey][0]))
            {
                printf("%s is a Number", inMap[inMapIndexKey]);
            }

            if (isKey(inMap[inMapIndexKey]))
            {
                printf("%s is a keyword\n", inMap[inMapIndexKey]);
                flag = 1;
                prevKey = isKey(inMap[inMapIndexKey]);
            }
            else if (isOp(inMap[inMapIndexKey]))
            {
                printf("%s is a operator\n", inMap[inMapIndexKey]);
                flag = 1;
            }
            else if (isalpha(inMap[inMapIndexKey][0]) && (prevKey | !flag))
            {
                if (prevKey)
                {
                    SymbolTable[STI].id = STI;
                    SymbolTable[STI].keyIndex = prevKey;
                    strcpy(SymbolTable[STI].name, inMap[inMapIndexKey]);
                    // SymbolTable[STI].keyIndex = getSize(prevKey);
                    STI++;

                    // printf("%d -- %s", SymbolTable[0].keyIndex, SymbolTable[0].name);
                }

                printf("%s is a variable\n", inMap[inMapIndexKey]);
            }
            inMapIndexKey++;
            printf("\n");
        }
        fgets(in, 100, stdin);
        in[strlen(in) - 1] = '\0';
    }

    return 0;
}