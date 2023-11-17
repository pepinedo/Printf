#include "ft_printf.h"

int ft_puthexupper(long nbr)
{
    char*   base;

    base = "0123456789ABCDEF";
    if (nbr < 16)
        write(1, base + nbr, 1);
    else
    {
        ft_puthexupper(nbr / 16);
        write(1, base + (nbr % 16), 1);
    }
    return (1);
}