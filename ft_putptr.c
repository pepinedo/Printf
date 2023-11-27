#include "ft_printf.h"

int ft_putptr(int ptr)
{
    write(1, "0x", 2);
    return (ft_puthexupper(ptr) + 2);
}