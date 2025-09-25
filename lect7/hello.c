#include <stdio.h>
int main()
{

    int n = 234;
    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
}