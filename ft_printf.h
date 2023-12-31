/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:56:20 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/11/29 12:22:01 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *type, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr, int i);
int	ft_putptr(void *ptr);
int	ft_putunbr(unsigned int nbr, int i);
int	ft_puthex(char *base, unsigned int nbr, int i);
int	ft_strlen(char *str);

#endif