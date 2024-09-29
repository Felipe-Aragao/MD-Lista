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

int main()
{
    long long a,b,modulo;

    //inserir primeiro coeficiente
    scanf("%lld", &a);
    //inserir numero da congruencia
    scanf("%lld", &b);
    //inserir o modulo n
    scanf("%lld", &modulo);

    long long x = 0;
    if (a < modulo) x = mdc(modulo,a);
    else x = mdc(a,modulo);

    long long resultado = 0;

    if (b % x == 0)
    {
        a = a / x;
        b = b / x;
        modulo = modulo / x;
        x = mdc(a,modulo);
        
        //se 'a' é igual a modulo-1, o inverso é o proprio a multiplicado por ele mesmo.
        if (a == modulo-1)
        {
            printf("Solução: %lld", a);
        }
        else if (a == 1)
        {
            printf("solução: %lld", b);
        }
        //Caso não ocorra, iremos procurar o inverso de 'a' para encontrar a resposta.
        else
        {
            if (x == 1 && modulo > 1)
            {
                for (long long i = 1; (a*i) % modulo !=b ;i++)
                {
                    //solução particular
                    resultado = i + 1;
                }
                //mostra a solução
                printf("Solução: x ≡ %lld", resultado);
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
