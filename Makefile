# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 10:52:46 by ppinedo-          #+#    #+#              #
#    Updated: 2023/11/29 11:54:13 by ppinedo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
FILES = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putptr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_strlen.c \

OBJS = $(FILES:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o : %.c
	gcc $(FLAGS) -c $< -o $@
	
all : $(NAME)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f *.o

re : fclean all

.PHONY : all fclean clean re