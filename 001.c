#include <stdio.h>
#include <math.h>

int primo(int num);

int main()
{
    int ePrimo, num;

    scanf("%d", &num);
    ePrimo = primo(num);

    if (ePrimo)
        printf("É primo\n");
    else if (!ePrimo)
        printf("Não é primo\n");
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
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}