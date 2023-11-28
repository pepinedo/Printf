/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:33:24 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 14:47:23 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(long nbr)
{
	char		*base;
	static int	count;

	if (!count)
		count = 0;
	base = "0123456789ABCDEF";
	if (nbr <= 16)
		count += write(1, base + nbr, 1);
	if (nbr > 16)
	{
		ft_puthexupper(nbr / 16);
		count += write(1, base + (nbr % 16), 1);
	}
	return (count);
}
