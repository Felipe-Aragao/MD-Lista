#include <stdio.h>
#include <time.h>
#include <math.h>

int primo(int num);

int main()
{
    time_t parada;
    int segundos = 60;
    parada = time(NULL) + segundos;
    
    int num = 0;

    while (time(NULL) < parada)
    {
        if (primo(num))
        {
            printf("%d, ", num);
        }
        num++;
    }
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


