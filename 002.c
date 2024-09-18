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
            printf("%d ", num);
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


