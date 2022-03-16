#include <stdio.h>
void print(){
    print("\n");
}
void main(void)
{
    char s;
    char str[10];
    scanf("%c", &s);
    // printf("\n");
    // scanf("%[^\n]s", str); 
    fgets(str,10,stdin);
     fputs(str,stdout);
     print();
     puts(str);
    //   str[strlen(str)-1] == '\0';
    // printf("the char is %c and the strung is %s ", s, str);
}