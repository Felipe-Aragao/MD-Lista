/*
8. Escrever um programa para encontrar a solução de uma congruência do tipo ax ≡
b mod m.
*/

#include <stdio.h>

long long mdc (long long a, long long b)
{
    if (a % b == 0)
    {
        return b;
    }
    return mdc(b,a%b);
}

long inverso(long a, long b, long modulo)
{  
    if (a == modulo-1) return b*a;
    else return 0;
}

int main()
{
    long long a,b,modulo;

    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &modulo);
    long long x = 0;
    if (a < modulo) x = mdc(modulo,a);
    else x = mdc(a,modulo);

    long long resultado;

    if (b % x == 0)
    {
        a = a / x;
        b = b / x;
        modulo = modulo / x;

        //se 'a' é igual a modulo-1, o inverso é o proprio a multiplicado por ele mesmo.
        if (a == modulo-1)
        {
            resultado = b*a;
            printf("Solução: x ≡ %lld mod (%lld)", resultado, modulo);
        }
        //Caso não ocorra, iremos procurar o inverso de 'a' para encontrar a resposta.
        else
        {
            if (x == 1 && modulo > 1)
            {
                for (long i = 1; (a*i) % modulo !=1 ;i++)
                {
                    //solução particular
                    resultado = i;
                }
                //mostra a solução
                printf("Solução: x ≡ %lld mod (%lld)", resultado, modulo);
            }
        }
    }
    //se 'b' não for divisivel por x, não há solução.
    else
    {
        printf("Não possui solução");
    }
    return 0;
}
