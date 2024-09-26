/*
8. Escrever um programa para encontrar a solução de uma congruência do tipo ax ≡
b mod m.
*/

#include <stdio.h>

int mdc (int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }

    return mdc(b,a%b);
}

int inverso(int a, int b, int modulo, int contador)
{
    //se 'a' nao for primo com o modulo, nao tem resposta.
    //se chegar ate o modulo e nao achar inverso, quer dizer que nao existe.
    if (mdc(a,modulo) != 1 || contador == modulo)
    {
        return 0;
    }

    if ((a*contador) % modulo == 1)
    {
        //para achar todas as solucoes basta multiplicar o modulo por um contador que va de 0 a K;
        return b*contador + modulo;
    }

    return inverso(a,b,modulo,contador+1);
}

int main()
{
    printf("%d", inverso(17,9,276,1));

    return 0;
}
