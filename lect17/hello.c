#include <stdio.h>
int sum(int *x, int *y)
{
    *x = 50;
    *y = 50;
    int c = (*x) + (*y);
    return c;
}

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d", *x, *y);
}

int main()
{

    int n = -1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("not prime");
            break;
        }
        else
        {
            printf("prime");
            break;
        }
    }

    int a[5] = {1, -3, 8, 4, -11};
    int maxsum = 0;
    for (int i = 0; i < 5; i++)
    {
        int currentsum = 0;
        for (int j = i; j < 5; j++)
        {
            currentsum = currentsum + a[j];
            if (currentsum > maxsum)
                maxsum = currentsum;
        }
    }
    printf("%d", maxsum);
    int x = 10;
    int y = 20;
    swap(&x, &y);

    int arr[4] = {1, 2, 3, 4};
    int *p = arr;
    for (int i = 0; i < 4; i++)
    {
        printf("%d", *(p + i));
    }
}