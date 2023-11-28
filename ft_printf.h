/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:56:20 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/28 12:27:57 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char*, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long nbr);
int	ft_putptr(void *ptr);
int	ft_putunbr(long nbr);
int	ft_puthexlower(long nbr);
int	ft_puthexupper(long nbr);
int	ft_hexlen(int nbr);

#endif