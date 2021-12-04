#include <stdio.h>
#include <string.h>
int isPattern(char ch);
int main()
{
    char arr[50] = "ggbrbgbrrrgbgbrr";
    char res[3] = {0};
    printf("enter\n");
    // scanf("%[^\n]s", arr);
    fgets(arr, 50, stdin);
    arr[strlen(arr) - 1] = '\0';
    int c = 0;
    while (arr[c] != '\0')
    {
        // printf("%c", arr[c]);
        if(isPattern(arr[c])){
            
        }
        printf("%c is %d in the rgb\n", arr[c], isPattern(arr[c]));
        c++;

    }
}

int isPattern(char ch)
{
    char str[] = "rgb";
    int i = 0;
    while (str[i] != '\0')
    {
        if (ch == str[i])
        {
            
            return 1;
        }
        // printf("%c", str[i]);
        i++;
    }
    return 0;
}