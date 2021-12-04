#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[10], n, sum = 0, i, binary[100] = {0};
    int j, binary1[100], l, result[10], c = 0, k;
    int sum1;
    printf("\n****** SENDER SIDE ******\n");
    printf("\nEnter the total length of message:");
    scanf("%d", &n);
    printf("\nEnter the data one by one :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nThe messages are:");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);
    printf("\nThe sum is: %d", sum);
    for (i = 0; sum > 0; i++)
    {
        binary1[i] = sum % 2;
        sum = sum / 2;
    }
    for (; i < 8; i++)
        binary1[i] = 0;
    l = i;
    for (i = l - 1, j = 0; i >= 0; i--, j++)
        binary[j] = binary1[i];
    printf("\nThe equivalent binary digit is :");
    for (i = 0; i < l; i++)
        printf("%d", binary[i]);
    for (c = 0, i = l - 1; i >= 4; i--)
    {
        if (c == 0)
        {
            if (binary[i] == 1 && binary[i - 4] == 1)
            {
                result[i - 4] = 0;
                c = 1;
            }
            else if (binary[i] == 1 && binary[i - 4] == 0)
            {
                result[i - 4] = 1;
                c = 0;
            }
            else if (binary[i] == 0 && binary[i - 4] == 0)
            {
                result[i - 4] = 0;
                c = 0;
            }
            else
            {
                result[i - 4] = 1;
                c = 0;
            }
        }
        else
        {
            if (binary[i] == 1 && binary[i - 4] == 1)
            {
                result[i - 4] = 1;
                c = 1;
            }
            else if (binary[i] == 1 && binary[i - 4] == 0)
            {
                result[i - 4] = 0;
                c = 1;
            }
            else if (binary[i] == 0 && binary[i - 4] == 0)
            {
                result[i - 4] = 1;
                c = 0;
            }
            else
            {
                result[i - 4] = 0;
                c = 1;
            }
        }
    }
    printf("\nThe binary value of wrapped sum is:");
    for (i = 0; i < 4; i++)
        printf("%d", result[i]);
    printf("\nThe binary value of checksum is:");
    for (i = 0, sum = 0, j = 3; i < 4; i++, j--)
    {
        sum1 = 1;
        if (result[i] == 1)
            result[i] = 0;
        else
            result[i] = 1;
        for (k = 1; k <= j; k++)
            sum1 = sum1 * 2;
        sum = sum + (result[i] * sum1);
        printf("%d", result[i]);
    }
    printf("\nThe checksum value is : %d", sum);
    printf("\nThe sender side sending messages are:");
    a[n++] = sum;
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);
    printf("\n\n----- RECEIVER SIDE	\n\n");
    printf("\nThe Reciever side messages recieved messages are:");
    sum = 0;
    //a[0]=3; //to check incorrect message for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
        sum = sum + a[i];
    }
    printf("\nThe sum is: %d", sum);
    for (i = 0; sum > 0; i++)
    {
        binary1[i] = sum % 2;
        sum = sum / 2;
    }
    for (; i < 8; i++)
        binary1[i] = 0;
    l = i;
    for (i = l - 1, j = 0; i >= 0; i--, j++)
        binary[j] = binary1[i];
    printf("\nThe equivalent binary digit is :");
    for (i = 0; i < l; i++)
        printf("%d", binary[i]);
    for (c = 0, i = l - 1; i >= 4; i--)
    {
        if (c == 0)
        {
            if (binary[i] == 1 && binary[i - 4] == 1)
            {
                result[i - 4] = 0;
                c = 1;
            }
            else if (binary[i] == 1 && binary[i - 4] == 0)
            {
                result[i - 4] = 1;
                c = 0;
            }
            else if (binary[i] == 0 && binary[i - 4] == 0)
            {
                result[i - 4] = 0;
                c = 0;
            }
            else
            {
                result[i - 4] = 1;
                c = 0;
            }
        }
        else
        {
            if (binary[i] == 1 && binary[i - 4] == 1)
            {
                result[i - 4] = 1;
                c = 1;
            }
            else if (binary[i] == 1 && binary[i - 4] == 0)
            {
                result[i - 4] = 0;
                c = 1;
            }
            else if (binary[i] == 0 && binary[i - 4] == 0)
            {
                result[i - 4] = 1;
                c = 0;
            }
            else
            {
                result[i - 4] = 0;
                c = 1;
            }
        }
    }
    printf("\nThe binary value of wrapped sum is:");
    for (i = 0; i < 4; i++)
        printf("%d", result[i]);
    printf("\nThe binary value of checksum is:");
    for (i = 0, sum = 0, j = 3; i < 4; i++, j--)
    {
        sum1 = 1;
        if (result[i] == 1)
            result[i] = 0;
        else
            result[i] = 1;
        for (k = 1; k <= j; k++)
            sum1 = sum1 * 2;
        sum = sum + (result[i] * sum1);
        printf("%d", result[i]);
    }
    printf("\nThe checksum value is : %d", sum);
    if (sum == 0)
        printf("\nThe recieved message is correct\n");
    else
        printf("\nThe recieved message is incorrect\n");
}
