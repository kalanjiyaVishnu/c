#include <stdio.h>
void main()
{
    int n, m, i;
    printf("enter the size \n");
    scanf("%d %d", &n, &m);
    int a[n],b[m];
    printf("enter the array one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the array two \n");

    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int p1 = 0, p2 = 0, x = 0;
    int ans[n + m];
    while (p1 < n && p2 < m)
    {
        if (a[p1] < b[p2])
        {
            ans[x++] = a[p1];
            p1++;
        }
        else
        {
            ans[x++] = b[p2];
            p2++;
        }
    }
    while (p1 < n)
    {
        ans[x++] = a[p1++];
    }
    while (p2 < m)
    {
        ans[x++] = b[p2++];
    }
    printf("\n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d\t", ans[i]);
    }
}