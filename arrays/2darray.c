#include <stdio.h>
void disp(int *arr);
void print(int m, int n, int arr[][n]);
void main(void)
{
    int arr[][2] = {
        {1, 2}, {1, 2}};
    // disp((int *)arr);//pointer reference using single pointer
    // disp(arr[0][0]); //pointer reference to first element in the array wil d0
    int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print(3, 3, a); //or just pass the size begfore thr array
    printf("%d", a[0][0]);
}
void disp(int *arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("-->%d<--", *((arr + i * 2) + j));
        }
    }
}
void print(int m, int n, int arr[][n])
{
    // int i, j;
    // for (i = 0; i < m; i++)
    // for (j = 0; j < n; j++)
    // {

    scanf("%d", &arr[0][0]);
    // }
}