#include <stdio.h>
#include <time.h>

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
    if (num == 1 || num == 0)
    {
        return 0;
    }

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


