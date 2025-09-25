#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 5, 6, 5, 4};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int windowSum = 0;
    for (int i = 0; i < k; i++)
    {
        windowSum = windowSum + arr[i];
    }
    int maxSum = windowSum;

    for (int j = k; j < n; j++)
    {
        windowSum = windowSum + arr[j] - arr[j - k];
        if (windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }
    printf("%d", maxSum);
}