#include <stdio.h>
#include <conio.h>
#define SIZE 10
int top = -1;
int a[SIZE];

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
void push(int num)
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
    if (isEmpty)
    {
        printf("Stack is empty");
        return;
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
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int opt = 0, temp, res;
    // clrscr();
    printf("1 display\n2 push\n3 pop\n");
    // while (1)
    // {
    //     printf("Enter the chioice");
    //     scanf("%d", opt);
    //     if (opt == 1)
    //     {
    //         display();
    //     }
    //     else if (opt == 2)
    //     {
    //         printf("enter the num");
    //         scanf("%d", &temp);
    //         push(temp);
    //     }
    //     else
    //     {
    //         printf("Bye");
    //         return 0;
    //     }
    // }
    push(1);
    push(2);
    push(3);
    display();
    while (1)
    {
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            display();
            break;
        case 2:
            printf("Enter the element\n");
            scanf("%d", &temp);
            push(temp);
            break;

        case 3:
            pop();
            break;

        case 4:
            res = peek(temp);
            printf("%d is peeked", res);
            break;
        default:
            break;
        }
    }
    return 0;
}