#include "ft_printf.h"

int ft_puthexupper(long nbr)
{
    char*   base;
    int     count;

    count = ft_hexlen(nbr);
    base = "0123456789ABCDEF";
    if (nbr < 0)
    {
        write(1, '-', 1);
        nbr = nbr * -1;
    }
    if (nbr <= 16)
        write(1, base + nbr, 1);
    if (nbr > 16)
    {
        ft_puthexupper(nbr / 16);
        write(1, base + (nbr % 16), 1);
    }
    return (count);
}
