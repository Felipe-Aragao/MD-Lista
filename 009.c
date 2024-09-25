#include <stdio.h>

void lerDados(int a[], int x[], int i, int tamanho)
{
    if (i == tamanho) return;

    scanf("%d", &a[i]);
    scanf("%d", &x[i]);

    lerDados(a,x,i+1,tamanho);
}

int mdc(int a, int b)
{
    if (a % b == 0) return b;

    return mdc(b,a%b);
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
}

int classesEquivalencia(int m, int x, int i)
{
    if (i == m) return 0;

    if (i == m%x)
    {
        return i;
    }

    if (m > 0) return classesEquivalencia(m,x,i+1);
    else return classesEquivalencia(-m,-x,i-+1);
}

int main()
{
    //solucao unica == entre 0 e a multiplicacao dos modulos

    int a[3]; // congruencias 
    int x[3]; //modulos 
    // m1 = x2*x3 ; m2 = x1*x3 ; m3 = x1*x2
    int m[3];
    m[0] = x[1]*x[2];
    m[1] = x[0]*x[2];
    m[2] = x[0]*x[1];
    // qual numero deixa o mesmo resto na divisao de m1 por x1 ; m2 por x2; m3 por x3
    int mEquivalencia[3];
    //botar na funcao inverso para achar a classe inversa; 
    int mInvertido[3];
    //soma entre as multiplicacoes de Ai,Mi e MiInvertido;
    int p;
    // resto entre p e X; X = x1*x2*x3
    int v;
    // v + modulo X;
    int r;
    
    
    //so faz isso se Xi forem coprimos

    return 0;
}