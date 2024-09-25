#include <stdio.h>

int euclidesExtendido(int a, int b);
int mdc (int a, int b);

int main()
{
    int a = -453;
    int b = -932;

    int resultado = euclidesExtendido(a, b);
    printf("s = %d\n", resultado);
    printf("t = %d", ((mdc(a, b) - resultado * a ) / b ));
}

int euclidesExtendido(int a, int b)
{
    int s, t, quociente;
    int s0 = 1;
    int s1 = 0;
    int t0 = 0;
    int t1 = 1;

    for (int i = 1; b != 0; i++)
    {
        if (i >= 2)
        {
            s = s0 - s1 * quociente;
            t = t0 - t1 * quociente;

            s0 = s1;
            s1 = s;
            t0 = t1;
            t1 = t;
        }
        quociente = a / b;

        int temp = b;
        b = a % b;
        a = temp;
        
    }
    if (a < 0)
        return -s;
    return s;
}

int mdc (int a, int b)
{
    if (a % b == 0)
    {
        if (b < 0) 
            return -b;
        
        return b;
    }
    return mdc(b, a % b);
}