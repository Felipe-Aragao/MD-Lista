/*
7. Escrever um programa para encontrar o inverso de a mod b.
*/

#include <stdio.h>

int main ()
{
    long long a, b;
    long long inverso = 0;

    printf("a: ");
    scanf("%lld", &a);
    printf("b: ");
    scanf("%lld", &b);

    for (long long contador = 1; contador < b; contador++)
    {
        if ((a*contador) % b == 1)
        {
            inverso = contador;
            printf("O inverso de %lldmod%lld é %lld\n", a,b,inverso);
        }
    }

    if (inverso == 0)
    {
        printf("Não possui inverso,");
    }

    return 0;
}