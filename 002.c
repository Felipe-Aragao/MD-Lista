/*
2. Escrever um programa para listar números primos sequencialmente. Você deve
otimizar o programa para que ele liste o maior número possível de primos em 60
segundos. 
*/

#include <stdio.h>
#include <time.h>
#include <math.h>

int primo(int num);

int main()
{
    time_t parada;
    int segundos = 60;
    parada = time(NULL) + segundos;
    
    int num = 0;
    int i = 0;

    while (time(NULL) < parada)
    {
        if (primo(num))
        {
            printf("%d ", num);
            i++;
        }
        num++;
    }
    printf("\n\nForam listados %d números primos", i);
}

int primo(int num)
{
    if (num == 2 || num == 3)
    {
        return 1;
    }
    else if (num <= 1 || num % 2 == 0)
    {
        return 0;
    }
    
    int raiz = sqrt(num);
    for (int i = 3; i <= raiz; i += 2)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}


