#include <stdio.h>
#include <time.h>

void getTime(unsigned long *timeNow)
{
    *timeNow = time(NULL);
}
void forwardPtrArr(int *arr)
{
    *(arr + 0) = 5;
}
void main()
{
    // unsigned long timesNow = 0;
    // getTime(&timesNow);
    // printf("%ld dsf", timesNow); 

    // int arr[] = {1, 2, 3, 4};
    // printf("%d", arr[0]);

    // forwardPtrArr(arr);
    // printf("%d", arr[0]);
printf("asdf");
}
