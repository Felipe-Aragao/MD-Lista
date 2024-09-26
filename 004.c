#include <stdio.h>
#include <math.h>

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
int multiplicacao(int n[],int i, int tamanho)
{
    if (tamanho == i) 
    {
        if (tamanho == 0) return 1;
        else return 1;
    }
    
    return n[i]*multiplicacao(n,i+1,tamanho);

    return multiplicacao(n,i+1,tamanho);
}

int main()
{
    int num1 =  8;
    int num2 = 4;

    //array para armazenar os fatores primos, vao sempre receber como tamanho o maior numero;
    int mmc[num1];
    int mdc[num1];

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
                if (num1 % i ==0 && num2 % i == 0)
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

    printf("%d\n", multiplicacao(mdc,0,c1));
    printf("%d\n", multiplicacao(mmc,0,c2));
    return 0;
}