#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr1[9], idx = 0;

    // Diagonal Elements
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i][i]);
    }

    printf("\n");
    // Row Sum
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < 3; j++)
        {
            rowSum += arr[i][j];
        }
        printf("%d ", rowSum);
    }

    printf("\n");
    // Col Sum
    for (int i = 0; i < 3; i++)
    {
        int colSum = 0;

        for (int j = 0; j < 3; j++)
        {
            colSum += arr[j][i];
        }

        printf("%d ", colSum);
    }
    printf("\n");

    // 2D to 1D
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[idx++] = arr[i][j];
        }
    }
}