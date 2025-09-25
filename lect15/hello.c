#include <stdio.h>

void p(int *a)
{
    *a = 100;
    printf("%d", *a);
}
int main()
{
    int a = 5;

    p(&a);
    printf("%d", a);
}