#include "ft_printf.h"

int ft_hexlen(int nbr)
{
    int i;

    i = 1;
    if (nbr < 0)
    {
        nbr = nbr * -1;
        i++;
    }
    while (nbr > 16)
    {
        nbr = nbr / 16;
        i++;
    }
    return (i);
}