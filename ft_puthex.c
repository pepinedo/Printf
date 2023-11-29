/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:53:25 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/29 12:04:23 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(char *base, unsigned int nbr, int i)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nbr >= len)
	{
		i = ft_puthex(base, nbr / len, i++);
		write(1, &base[nbr % len], 1);
		i++;
	}
	else if (nbr < len)
	{
		write(1, &base[nbr], 1);
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	int numero;
	numero = -10;

	printf("%i", ft_puthex("0123456789abcdef", numero, 0));
	printf("%i", printf("%x", numero));
}*/