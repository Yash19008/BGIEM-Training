#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int candidate = n + 1;

    while (1)
    {
        int isPrime = 1;

        for (int i = 2; i * i <= candidate; i++)
        {
            if (candidate % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("Next prime after %d is %d\n", n, candidate);
            break;
        }

        candidate++;
    }

    return 0;
}
