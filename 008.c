/*
8. Escrever um programa para encontrar a solução de uma congruência do tipo ax ≡
b mod m.
*/

#include <stdio.h>

long mdc (int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }

    return mdc(b,a%b);
}

int inverso(int a, int b, int modulo, int contador)
{  
    if ((a*contador) % modulo == 1)
    {
       //para achar todas as solucoes basta multiplicar o modulo por um contador que va de 0 a K;
       return b*contador + modulo;
    }

    return inverso(a,b,modulo,contador+1);
}

int main()
{
    //se o mdc for 1, chama a função
    long a,b, modulo;
    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &modulo);
    long x = mdc(a,modulo);
    long r = 0;

    if (b % x == 0)
    {
        a = a / x;
        b = b / x;
        modulo = modulo / x;
        x = mdc(a,modulo);
    }

    //se 'a' igual a modulo-1, o inverso é o proprio a multiplicado por ele mesmo.
    //se o mdc entre 'a' e 'modulo' for igual a 1, chama a função inverso.
    if (x == 1 && modulo > 1)
    {
        for (int i = 1; (a*i) % modulo !=1 ;i++)
        {
            //solução particular
            r = b*i;
        }
        //mostra a solução
        printf("Solução: %ld", r);
    }
    //se 'a' nao for primo com o modulo, nao tem resposta.
    else
    {
        printf("Não possui solução");
    }
    return 0;
}
