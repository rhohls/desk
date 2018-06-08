# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2014/11/09 17:24:51 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCDIR = src
OBJDIR = obj
INCDIR = includes

SRC = src/ft_atoi.c src/ft_bzero.c src/ft_bzero.c src/ft_isalnum.c\
	src/ft_itoa.c src/ft_lstaddend.c src/ft_lstccpy_tostr.c\
	src/ft_lstcpy_tostr.c src/ft_lstdel.c src/ft_lstdelone.c src/ft_lstdup.c\
	src/ft_lstfold.c src/ft_lstiter.c src/ft_lstln.c src/ft_lstmap.c\
	src/ft_lstnew.c src/ft_lstpushback.c src/ft_lstpushfront.c\
	src/ft_lstshift.c src/ft_memalloc.c src/ft_memccpy.c src/ft_memchr.c\
	src/ft_memcmp.c src/ft_memcpy.c src/ft_memdel.c src/ft_memequ.c\
	src/ft_memmove.c src/ft_memset.c src/ft_memsub.c src/ft_putchar.c\
	src/ft_putendl.c src/ft_putnbr.c src/ft_putstr.c src/ft_putchar_fd.c\
	src/ft_putendl_fd.c src/ft_putnbr_fd.c src/ft_putstr_fd.c src/ft_strcat.c\
	src/ft_strccpy.c src/ft_strchr.c src/ft_strclr.c src/ft_strcmp.c\
	src/ft_strcpy.c src/ft_strdel.c src/ft_strdup.c src/ft_strequ.c\
	src/ft_striter.c src/ft_striteri.c src/ft_strjoin.c src/ft_strlcat.c\
	src/ft_strlen.c src/ft_strlstjoin.c src/ft_strmap.c src/ft_strmapi.c\
	src/ft_strncat.c src/ft_strncmp.c src/ft_strncpy.c src/ft_strnequ.c\
	src/ft_strnew.c src/ft_strnstr.c src/ft_strrchr.c src/ft_strsplit.c\
	src/ft_strsplit_tolst.c src/ft_strstr.c src/ft_strsub.c\
	src/ft_strtrim.c src/ft_tolower.c src/ft_toupper.c
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)
$(NAME): build $(OBJ)
	ar rc $(NAME) $(OBJ)

build:
	mkdir -p $(OBJDIR)
clean:
	rm -f $(OBJ)
fclean: clean
	rm $(NAME)
re : fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS) -I $(INCDIR)
