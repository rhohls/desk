# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppreez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 17:43:33 by ppreez            #+#    #+#              #
#    Updated: 2018/05/23 14:53:58 by ppreez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft*.c

OBJS = *.o

FUNC ?= error

all: archive

archive: compile
	ar -rcv $(NAME) $(OBJS)

compile: 
	gcc -c $(FILES) -Wall -Wextra -Werror

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: all clean
	gcc ./test/test_$(FUNC).c $(NAME)
