/*
7. Escrever um programa para encontrar o inverso de a mod b.
*/

#include <stdio.h>

void inverso (int a, int b, int contador);

int main ()
{
    int a, b;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    inverso(a, b, 1);

    return 0;
}

void inverso (int a, int b, int contador)
{
    for (int contador = 1; contador < b; contador++)
    {
        if ((a * contador) % b == 1)
        {
            printf("O inverso de %dmod%d é %d\n",a, b, contador);
            return;
        }
    }
    
    printf("Sem inverso.\n");
}
