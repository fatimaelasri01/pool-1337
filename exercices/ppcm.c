#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int pg, pm, n1, n2,pk , res = 0, i, j;
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    if (n1 == 0 || n2 == 0)
    {
        printf("0");
        return 0;
    }
    else if (n1 == n2)
    {
        printf("%i", n1);
        return 0;
    }
    else if (n1 > n2)
    {
        pm = n2;
        pg = n1;
    }
    else
    {
        pm = n1;
        pg = n2;
    }
    j = 2;
    pk = pg;
    while (1)
    {
        i = 2;
        while (res < pk)
        {
            res = pm * i;
            i++;
        }
        if (pk == res)
        {
            printf("%i", res);
            return 0;
        }
        else{
            pk = pg * j;
            j++;
        }
    }
}