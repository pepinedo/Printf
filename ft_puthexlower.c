/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:33:04 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 13:22:38 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(long nbr)
{
	char		*base;
	static int	count;

	count = 0;
	base = "0123456789abcdef";
	if (nbr <= 16)
		count += write(1, base + nbr, 1);
	if (nbr > 16)
	{
		ft_puthexlower(nbr / 16);
		count += write(1, base + (nbr % 16), 1);
	}
	return (count);
}

/*
int	main(void)
{
	int numero;
	numero = 1000;

	ft_puthexlower(numero);
}*/