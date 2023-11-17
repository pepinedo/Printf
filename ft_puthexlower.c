#include "ft_printf.h"

int ft_puthexlower(long nbr)
{
    char*   base;

    base = "0123456789abcdef";
    if (nbr < 16)
        write(1, base + nbr, 1);
    else
    {
        ft_puthexlower(nbr / 16);
        write(1, base + (nbr % 16), 1);
    }
    return (1);
}