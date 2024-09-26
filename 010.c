#include <stdio.h>

int inverso(int num, int modulo, int contador);

int main()
{
    int n;
    printf("Número congruências lineares: ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int mTotal = 1;

    //Entrada do usuário
    printf("\nA entrada deve ser no formato XmodY\nEx: 3mod5\n\n");
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