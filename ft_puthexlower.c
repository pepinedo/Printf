/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:33:04 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 16:12:55 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(int nbr, int i)
{
	char		*base;

	base = "0123456789abcdef";
	if (nbr == 16)
		return (write(1, "10", 2));
	if (nbr <= 16)
		i += write(1, base + nbr, 1);
	if (nbr > 16)
	{
		i = ft_puthexlower(nbr / 16, i++);
		i += write(1, base + (nbr % 16), 1);
	}
	return (i);
}

/*
int	main(void)
{
	int numero;
	numero = 32;

	printf("%i", ft_puthexlower(numero, 0));
}*/