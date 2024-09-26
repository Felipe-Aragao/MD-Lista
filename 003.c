/*
3. Escrever um programa para decompor um determinado número inteiro em seus
fatores primos.
*/

#include <stdio.h>
#include <math.h>

int primo(int num);
void imprime (int n[], int contador);

int main()
{
    int num = 12;
    int meuArr[num];
    int contador = 0;
    
    for (int i = 2; i <= num ; i++)
    {
        while(num % i == 0 && primo(i) == 1)
        {
            meuArr[contador] = i;
            contador++;
            num = num / i;
        }
    }

    imprime(meuArr,contador);
    

    return 0;
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

void imprime (int n[], int contador)
{
    while (contador  != 0)
    {
        printf("%d ", n[contador-1]);
        contador--;
    }
}
