#include "ft_printf.h"

int ft_puthexlower(long nbr)
{
    char*   base;
    int     count;

    count = ft_numlen(nbr);
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
        ft_puthexlower(nbr / 16);
        write(1, base + (nbr % 16), 1);
    }
    return (count);
}

/*
int main()
{
    int numero;
    numero = 1000;

    ft_puthexlower(numero);
}*/