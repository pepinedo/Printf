/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:29:54 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/15 17:00:50 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_converse(char v, va_list pr)
{
	if (v == 'c')
		return (ft_putchar(va_arg(pr, int)));
	if (v == 's')
		return (ft_putstr(va_arg(pr, char *)));
//	if (v == 'p')
//		return (ft_putptr(va_arg(pr, )));
	if (v == 'd' || v == 'i')
		return (ft_putnbr(va_arg(pr, int)));
	return (0);
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

int main()
{
	printf("El entero es --> %i\n", 120234234);
	ft_printf("El entero es --> %i\n", 120123123);
}