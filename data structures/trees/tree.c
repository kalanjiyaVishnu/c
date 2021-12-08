#include <stdio.h>
void PREorder(int a[], int root, int len)
{
    if (root >= len)
        return;

    printf("%d ", a[root]);         // root
    PREorder(a, 2 * root + 1, len); // left
    PREorder(a, 2 * root + 2, len); // right
}
void postOrder(int a[], int root, int len)
{
    if (root >= len)
        return;

    postOrder(a, 2 * root + 1, len);
    postOrder(a, 2 * root + 2, len);
    printf("%d ", a[root]);
}
void inOrder(int a[], int root, int len)
{
    if (root >= len)
        return;

    inOrder(a, 2 * root + 1, len);
    printf("%d ", a[root]);
    inOrder(a, 2 * root + 2, len);
}
void main(void)
{
    // a --> size  === 6 * 2bytes 12
    // a[0] -- > size ==== 2    `      2
    // 6
    int a[] = {1, 2, 3, 4, 5};
    //          1
    //      2        3
    //  4      54  65
    //
    PREorder(a, 0, sizeof(a) / sizeof(a[0]));
    printf("\n");
    inOrder(a, 0, sizeof(a) / sizeof(a[0]));
    printf("\n");

    postOrder(a, 0, sizeof(a) / sizeof(a[0]));
}