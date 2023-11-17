#include "ft_printf.h"

int ft_putunbr(long nbr)
{
    int i;

    i = 0;
    if (nbr == 0)
        ft_putchar('0');
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
        i++;
    }
    if (nbr > 9)
    {
        ft_putunbr(nbr / 10);
        nbr = nbr % 10;
        i++;
    }
    if (nbr <= 9)
        ft_putchar(nbr + '0');
    return (i);
}