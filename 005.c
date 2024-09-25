#include <stdio.h>

int euclides (int a, int b)
{
    if (a % b == 0)
    {
        if (b < 0)
            return -b;
        return b;
    }
    return euclides(b, a % b);
}

int main  ()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", euclides(a, b));

    return 0;
}
