/*
7. Escrever um programa para encontrar o inverso de a mod b.
*/

#include <stdio.h>

int main ()
{
    long long a, b;
    long long inverso = 0;
    int negativo = 0;

    printf("a: ");
    scanf("%lld", &a);
    printf("b: ");
    scanf("%lld", &b);

    if (a < 0)
    {
        negativo = 1;
        a *= -1;
    }

    for (long long contador = 1; contador < b; contador++)
    {
        if ((a*contador) % b == 1)
        {
            inverso = contador;
            
            if (negativo)
            {
                inverso = (inverso * -1) + b;
            }
            
            printf("O inverso de %lldmod%lld é %lld\n", a,b,inverso);
        }
    }

    if (inverso == 0)
    {
        printf("Não possui inverso,");
    }

    return 0;
}