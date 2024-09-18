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
    else if (num == 0 || num == 1)
    {
        return 0;
    }
    
    
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}