#include <stdlib.h>
#include <stdio.h>
int    is_prime(int nb)
{
    int    i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int    ft_find_next_prime(int nb)
{
    if (is_prime(nb))
        return (nb);
    else
        return (ft_find_next_prime(nb + 1)); 
}
int main(int argc, char *argv[])
{
    int nb;
    int i = 2;
    nb = atoi(argv[1]);
    while (nb != 1)
    {
        if (nb % i == 0)
        {
            printf("%i", i);
            if (nb != i)
                printf("*");
            nb = nb / i;
        }
        else
        {
            i++;
            i = ft_find_next_prime(i);
        }
    }
    printf("\n");
}