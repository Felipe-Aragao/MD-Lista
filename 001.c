#include <stdio.h>

int primo(int num, int i);

int main()
{
    int ePrimo, num;

    scanf("%d", &num);
    ePrimo = primo(num, 2);

    if (ePrimo)
        printf("É primo\n");
    else if (!ePrimo)
        printf("Não é primo\n");
}

int primo(int num, int i)
{
    if (num == 1 || num == 0)
        return 0;

    if (num == i)
        return 1;

    if (num % i == 0)
        return 0;

    primo(num, i + 1);

}