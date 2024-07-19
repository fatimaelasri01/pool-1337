#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int nb1, i = 2, nb2, pm, res = 1;
    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[2]);
    if (nb1 > nb2)
    {
        pm = nb2;
    }
    else
    {
        pm = nb1;
    }
    while (i <= pm)
    {
        if (nb1 % i == 0 && nb2 % i == 0)
        {
            res = i;
        }
        i++;
    }
    printf("%i\n", res);
}