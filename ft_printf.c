/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:29:54 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 13:31:31 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_converse(char v, va_list pr)
{
	if (v == 'c')
		return (ft_putchar(va_arg(pr, int)));
	else if (v == 's')
		return (ft_putstr(va_arg(pr, char *)));
	else if (v == 'p')
		return (ft_putptr(va_arg(pr, void *)));
	else if (v == 'd' || v == 'i')
		return (ft_putnbr(va_arg(pr, int)));
	else if (v == 'u')
		return (ft_putunbr(va_arg(pr, unsigned int)));
	else if (v == 'x')
		return (ft_puthexlower(va_arg(pr, long)));
	else if (v == 'X')
		return (ft_puthexupper(va_arg(pr, long)));
	else if (v == '%')
		return (ft_putchar('%'));
	return (-2147483648);
}

int	ft_printf(const char *type, ...)
{
	va_list	pr;
	int		i;
	int		howmany;

	i = 0;
	howmany = 0;
	va_start(pr, type);
	while (type[i] != '\0')
	{
		if (type[i] == '%')
		{
			i++;
			howmany += ft_converse(type[i], pr);
		}
		else
			howmany += ft_putchar(type[i]);
		i++;
	}
	return (howmany);
}


int	main(void)
{
//	printf(" %p ", -1);
	printf("%i\n", ft_printf("%p", "1"));
}
