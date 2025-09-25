#include <stdio.h>

int main()
{
    int a = 101;
    int b = 102;
    int c = 103;
    int arr[5] = {1, 1, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    printf("%d", arr[1]);
}
