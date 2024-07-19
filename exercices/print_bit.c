#include <unistd.h>
void p_bit(unsigned char c)
{
    int i = 128;
    while (i > 0)
    {
        if (c & i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i /= 2;
    }    
}
int main()
{
    p_bit(42);
    write(1, "\n", 1);
    return 0;
}   