/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:34:09 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 11:35:42 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nbr)
{
	int	i;

	i = 1;
	if (nbr == 0)
		putchar('0');
	if (nbr < 0)
	{
		putchar('-');
		nbr = -nbr;
		i++;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
		i++;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	return (i);
}
