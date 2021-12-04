// You are using GCC
#include<stdio.h>
int main(){
    int c=0;
    char kids[50],order[10];
    
    scanf("%s",kids);
    scanf("%s",order);
    
    while(kids[c]!='\0'){
        int flag = 0,fc=0;
        while(order[fc]!='\0'){
            if(order[fc]!=kids[c]){
                flag = 1;
                break;
            }fc++;
        }
        if(flag){
            continue;
        }
        else printf("%c",kids[c]);
    // printf("%c",*(kids+c));
        c++;
    }
    // printf("dav");
    return 0;
}