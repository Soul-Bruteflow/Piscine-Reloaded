# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/31 17:51:42 by bruteflow         #+#    #+#              #
#    Updated: 2019/03/31 17:54:11 by bruteflow        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./srcs/
PATH_OBJ = ./
PATH_HEAD = ./includes/

SRC	= 	$(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)ft_putstr.c \
		$(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c \
		$(PATH_SRC)ft_swap.c

OBJECT	= $(SRC:.c=.o)
HEADERS	= $(PATH_HEAD)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OPTIONS	= -c
HOPTIONS = -I $(HEADERS)

AR		= ar
ARFLAGS	= rc
RLIB	= ranlib

RMF 	= rm -f

all: $(NAME)

$(NAME):
	$(CC) $(OPTIONS) $(CFLAGS) $(SRC) $(HOPTIONS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECT)
	$(RLIB) $(NAME)

clean:
	$(RMF) $(OBJECT)

fclean: clean
	$(RMF) $(NAME)

re: fclean all