/*
4. Escrever um programa para determinar o mdc e o mmc de dois inteiros com base
em seus fatores primos.
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>



int primo(int num);
long long multiplicacao(int n[],int i, int tamanho);

int main()
{
    int num1;
    int num2;
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);


    //array para armazenar os fatores primos, vao sempre receber como tamanho o maior numero;
    int raiz1 = sqrt(num1);

    int mmc[raiz1];
    int mdc[raiz1];

    //contador mdc;
    int c1 = 0;
    //contador mmc;
    int c2 = 0;

    for (int i = 2; num1 > 1 || num2 > 1 ; i++)
    {
        if (primo(i) == 1)
        {
            while(num1 % i == 0 || num2 % i ==0)
            {
                if (num1 % i == 0 && num2 % i == 0)
                {
                    mdc[c1] = i;
                    c1++;

                    num1 = num1/i;
                    num2 = num2/i;
                }
                else if (num1 % i == 0) 
                {
                    num1 = num1/i;
                }
                else if (num2 % i == 0) 
                {
                    num2 = num2/i;
                }
                mmc[c2] = i;
                c2++;
            }
        }
    }
    printf("\nMDC: %ld\n", multiplicacao(mdc,0,c1));
    printf("MMC: %lld\n", multiplicacao(mmc,0,c2));
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
//funcao recebe o array dos fatores primos dos numeros e retorna os valores do mdc ou mmc.
long long multiplicacao(int n[],int i, int tamanho)
{
    long long resultado = 1;
    for (int i = 0; i != tamanho; i++)
    {
        resultado = resultado * n[i];
    }
    
    return resultado;
}

