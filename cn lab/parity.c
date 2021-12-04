#include <stdio.h>
#include <string.h>
int main()
{
    char msg[100];
    int count = 0, i;
    printf("Enter the message:");
    scanf("%s", msg);
    printf("\n*******EVEN PARITY*******");
    printf("\n*******SENDER SIDE*******");
    for (i = 0; i < strlen(msg); i++)
    {
        if (msg[i] == '1')
            count++;
    }
    if (count % 2 == 0)
    {
        printf("\nEven parity value is : 0");
        msg[strlen(msg) - 1] = '0';
    }
    else
    {
        printf("\nEven parity value is : 1");
        msg[strlen(msg) - 1] = '1';
    }
    printf("\nFina Sending message is with parity %s\n", msg);
    printf("\n*******RECEIVER SIDE*******");
    count = 0;
    printf("\nFinal Recieved message is :");
    scanf("%s", msg);
    for (i = 0; i < strlen(msg); i++)
    {
        if (msg[i] == '1')
            count++;
    }
    if (count % 2 == 0)
    {
        printf("\nEven parity value is : 0");
        printf("\nNo Error in frame");
    }
    else
    {
        printf("\nEven parity value is : 1");
        printf("\nError in frame");
    }
    return 0;
}
