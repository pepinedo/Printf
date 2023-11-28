/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:33:24 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 16:16:11 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(int nbr, int i)
{
	char		*base;

	base = "0123456789abcdef";
	if (nbr == 16)
		return (write(1, "10", 2));
	if (nbr <= 16)
		i += write(1, base + nbr, 1);
	if (nbr > 16)
	{
		i = ft_puthexupper(nbr / 16, i++);
		i += write(1, base + (nbr % 16), 1);
	}
	return (i);
}

