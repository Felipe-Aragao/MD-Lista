#include <stdio.h>

int mdc (int a, int b)
{
    if (a % b == 0)
    {
        if (b < 0)
            return -b;
        return b;
    }
    return mdc(b, a % b);
}

int main  ()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", mdc(a, b));

    return 0;
}
