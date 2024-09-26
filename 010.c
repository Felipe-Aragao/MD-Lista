/*
10. Generalize o programa da questão anterior para funcionar com n congruências ao
invés de somente 3, onde n será dado pelo usuário.
*/

#include <stdio.h>

int inverso(int num, int modulo, int contador);
int mdc (int a, int b);

int main()
{
    int n;
    printf("Número congruências lineares: ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int mTotal = 1;

    //Entrada do usuário
    printf("\nA entrada deve ser no formato AmodB\nEx: 3mod5\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i + 1);
        int input = scanf("%dmod%d", &a[i], &b[i]);
        if (input != 2)
        {
            printf("Escreva a entrada na forma XmodY");
            return 1;
        }
        
        // Encontrar o M
        mTotal *= b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mdc(b[i], b[j]) != 1)
            {
                printf("Os valores de b não são coprimos");
                return 2;
            }
        }
    }

    // Encontrar os Mk
    int m[n];
    int y[n];
    for (int i = 0; i < n; i++)
    {
        m[i] = mTotal / b[i];
        y[i] = inverso(m[i], b[i], 1);
    }
    
    // Aplicar definição
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x += a[i] * m[i] * y[i];
    }

    printf("\nx = %d", x % mTotal);
    return 0;
}

int inverso(int num, int modulo, int contador)
{
    if (contador == modulo)
    {
        return 0;
    }

    if ((num*contador)%modulo == 1)
    {
        return contador;
    }

    return inverso(num,modulo,contador+1);
}

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