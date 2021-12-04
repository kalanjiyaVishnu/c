#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{

    if (r >= l)
    {
        int mid = l + ((r - l) / 2);
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    // for (int i = 0; i <= r; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    return -1;
}
void maxInBitonic(int arr[], int n)
{
    // using binary search

    // if ()
    // {
    //     int present = 0;
    //     int lo = 1, hi = n - 1;

    //     while (lo <= hi)
    //     {
    //         int mid = (lo + hi) / 2;
    //         if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    //         {
    //             printf("%d is the max", arr[mid]);
    //             break;
    //         }

    //         else if (arr[mid] > arr[mid - 1])
    //         {
    //             lo = mid + 1;
    //         }
    //         else
    //             hi = mid - 1;
    //     }
    // }
}

void  findSquare(int n)
{
    int l = 1, h = n;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (mid * mid > n)
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    printf("%d is the square", l - 1);
}
int main()
{
    // binary search
    // int arr[] = {2, 3, 4, 10, 40};
    int arr[] = {-20, -10, 40, 20, 10};
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    // int res = binarySearch(arr, 0, n - 1, key);
    // printf("the result is %d %d", res,arr[res]);

    // maxInBitonic(arr, n - 1);

    findSquare(16);
}