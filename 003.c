/*
3. Escrever um programa para decompor um determinado número inteiro em seus
fatores primos.
*/

#include <stdio.h>
#include <math.h>


int main()
{
    int num;
    int contador = 0;

    printf("Número: ");
    scanf("%d", &num);
    
    int raiz = sqrt(num);
    for (int i = 2; i <= raiz ; i += 2)
    {
        while(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
        if (i == 2)
        {
            i--;
        }
    }

    if (num > 1)
    {
    printf("%d", num);
    }

    return 0;
}

