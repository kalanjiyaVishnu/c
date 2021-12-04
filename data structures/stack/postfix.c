#include <stdio.h>
#include <conio.h>
#define SIZE 10
int top = -1;
char a[SIZE];

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if (top == SIZE - 1)
        return 1;
    return 0;
}
void push(char num)
{
    if (isFull())
    {
        printf("the stack is full\n");
        return;
    }
    else
    {
        a[++top] = num;
        printf("%d is pushed", num);
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack is empty");
        return;
    }
    printf("%d --> is removed\n", a[top]);
    top--;
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty");
        return 0;
    }
    return a[top];
}
void display()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%c ", a[i]);
        }
    }
}
int main()
{
    char str[20];

    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '(')
        {
            push(str[i]);
        }
        else
            pop(str[i]);
        i++;
    }
    if (top == -1)
    {
        printf("it is well settled");
    }
    else
        printf("not settled");
    // display();
    return 0;
}