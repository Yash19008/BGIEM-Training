#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int t = 0, b = 2;
    int l = 0, r = 2;

    while (t <= b && l <= r)
    {
        for (int i = l; i <= r; i++)
            printf("%d ", arr[t][i]);
        t++;

        for (int i = t; i <= b; i++)
            printf("%d ", arr[i][r]);
        r--;

        for (int i = r; i >= l; i--)
            printf("%d ", arr[b][i]);
        b--;

        for (int i = b; i >= t; i--)
            printf("%d ", arr[i][l]);
        l++;
    }
}