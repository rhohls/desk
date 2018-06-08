# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhohls <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/18 14:15:44 by rhohls            #+#    #+#              #
#    Updated: 2018/05/23 13:56:24 by rhohls           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra
FILES	= ft_*.c
OBJECT	= ft_*.o
TEST	?= test.c
HEADERS	= libft.h


all: library

library: object
	ar -rc $(NAME) $(OBJECT)

object: 
	$(CC) -c $(CFLAGS) $(FILES)

clean:
	/bin/rm -f $(OBJECT)
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
