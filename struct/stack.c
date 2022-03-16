#include <stdio.h>
#define SIZE 10
 int top = -1, stack[SIZE] = {0};
void push();
void pop();
void disp();
int isFull();
int isEmp();
void push(int num)
{
    printf("%d", size);
    if (isFull())
    {

        printf("Fullllllllll");
    }
    else
    {
        top = top + 1;
        stack[top] = num;
        printf("%d-->inserted", stack[top]);
    }
}
void pop()
{
    if (isEmp())
    {
        printf("empppppty");
    }
    else
    {
        top--;
        disp();
    }
}
void disp()
{
    for (int i = 0; i <= top; i++)
    {

        printf("%d", stack[i]);
    }
}
int isFull()
{
    if (top >= SIZE)
    {
        return 1;
    }
    else
        return 0;
}
int isEmp()
{
    if (top < 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int choic;
    while (1)
    {
        int temp = 0;
        printf("\n0 --> insert\n1 --> pop\n2 --> disp");
        scanf("%d", &choic);
        switch (choic)
        {
        case 0:
        {
            push(temp);
            break;
        }
        case 1:
        {
            printf("enter num");
            scanf("%d", &temp);
            pop(temp);
            break;
        }
        case 2:
        {
            disp();
            break;
        }
        default:
            break;
        }
    }
}