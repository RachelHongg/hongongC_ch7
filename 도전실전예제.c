#include <stdio.h>

int res_func(int n);

int main(void)
{
    printf("%d", res_func(10));
    return 0;
}

int res_func(int n)
{
    int res;
    if (n == 1)
        return 1;
    res = res_func(n - 1) + n;

    return res;
}