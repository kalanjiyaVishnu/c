#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    // int isPrime[n + 1];
    // isPrime[0] = isPrime[1] = 0;
    // for (int i = 0; i < n; i++)
    //     isPrime[i] = 1;

    // for (int i = 2; i <= n; i++)
    //     if (isPrime[i])
    //   ṇ  {
    //         for (int j = 2 * i; j <= n; j += i)
    //         {
    //             isPrime[j] = 0;
    //         }
    //     }

    // for (int i = 2; i <= n; i++)
    // {

    //     int flag = 1;
    //     // if (i % 2 != 0)
    //     //     printf("%d ", i);
    //     for (int j = 2; j <= i / 2; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             flag = 0;
    //         }
    //     }
    //     if(flag)
    //         printf("%d ", i);
    // }
    // the above approcah has time complexity of o(n*2)

    // the sieve of extrepsa[dfj  paerhjgp] method

    int isPrime[n + 1];
    for (int i = 0; i < n; i++)
        isPrime[i] = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            printf("%d ", i);
    // O(n*log(log(n)))
    // this implementation is less than that if we use lpf lower prime factor
    // and make this  a more optimized one like n/2 + n/3 +n/4 ... which is less than
    // < O(n*log(log(n)))
}