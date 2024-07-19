#include <unistd.h>
int ispowerof2(unsigned int n)
{
    if (n == 0)
        return 0;
    while (n % 2 == 0)
        n /= 2;
    return (n == 1);
}
int ispowerof2(unsigned int n)
{
    return (n && !(n & (n - 1)));
}
int ispowerof2_2(int n)
{
    int i;
    i = 2;
    while (i < n)
    {
        if (i == n)
            return 1;
        i *= 2;
    }
    return 0;
}
int main()
{
    int n = 16;
    if (ispowerof2_2(n))
        write(1, "yes\n", 4);
    else
        write(1, "no\n", 3);
    return 0;
}