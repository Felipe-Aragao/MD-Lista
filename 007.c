#include <stdio.h>

void inverso (int a, int b, int contador)
{
    if (contador >= b) 
    {
        printf("Sem inverso.\n");
        return;
    }

    if ((a * contador) % b == 1)
    {

        printf("%d\n", contador);
        return;
    }

    inverso(a, b, contador + 1);
}

int main ()
{
    int a, b;

    scanf("%d %d", &a, &b);

    inverso(a, b, 1);

    return 0;
}
